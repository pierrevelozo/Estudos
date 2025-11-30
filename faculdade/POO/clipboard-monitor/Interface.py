import tkinter as tk
from tkinter import ttk
import sv_ttk # NOVO: Importe o tema
import json
import os
from datetime import datetime
from Clipboard import Clipboard

# Constante para o nome do arquivo de histórico
CAMINHO_ARQUIVO = "elementos.json"

class Janela:
    def Criar(self):
        self.root = tk.Tk()
        self.root.title("Monitor da Área de Transferência (com Histórico)")
        self.root.geometry("400x500") # Aumentei um pouco a altura

        sv_ttk.set_theme("dark") # ou "light"

        # Instância do Clipboard
        self.copiador = Clipboard()

        # Lista em memória para guardar o histórico completo
        # (Estrutura: [{"timestamp": "...", "content": "..."}, ...])
        self.historico_completo = []

        # --- Widgets da Interface ---
        
        info_label = ttk.Label(self.root, text=f"Histórico (Salvo em {CAMINHO_ARQUIVO}):")
        info_label.pack(pady=5)

        # Frame para conter o Listbox e a Scrollbar
        frame = ttk.Frame(self.root)
        frame.pack(padx=10, pady=5, fill=tk.BOTH, expand=True)

        scrollbar = ttk.Scrollbar(frame, orient=tk.VERTICAL)
        self.hist_listbox = tk.Listbox(frame, yscrollcommand=scrollbar.set, height=20)
        
        scrollbar.config(command=self.hist_listbox.yview)
        scrollbar.pack(side=tk.RIGHT, fill=tk.Y)
        self.hist_listbox.pack(side=tk.LEFT, fill=tk.BOTH, expand=True)

        self.hist_listbox.bind("<Double-Button-1>", self.CopiarSelecionado)

        # Frame para os botões
        botoes_frame = ttk.Frame(self.root)
        botoes_frame.pack(pady=10)

        copiar_btn = ttk.Button(botoes_frame, text="Copiar Selecionado", command=self.CopiarSelecionado)
        copiar_btn.pack(side=tk.LEFT, padx=5)
        
        limpar_btn = ttk.Button(botoes_frame, text="Limpar Histórico", command=self.LimparHistorico)
        limpar_btn.pack(side=tk.LEFT, padx=5)
        
        # --- Lógica de Inicialização ---
        
        # 1. Carrega o histórico do JSON para a memória (self.historico_completo)
        #    e preenche o Listbox
        self.CarregarHistorico()
        
        # 2. Define o "último conteúdo" com o que está no clipboard AGORA
        self.ultimo_conteudo = self.copiador.Colar()

        # 3. Inicia o polling (o loop de verificação)
        self.MonitorarClipboard()

    def CarregarHistorico(self):
        """Lê o JSON e popula o Listbox e a lista em memória."""
        try:
            with open(CAMINHO_ARQUIVO, "r", encoding="utf-8") as arquivo:
                self.historico_completo = json.load(arquivo)
                
                # Garante que é uma lista (caso o arquivo esteja corrompido)
                if not isinstance(self.historico_completo, list):
                    self.historico_completo = []

        except (FileNotFoundError, json.JSONDecodeError):
            # Se o arquivo não existe ou é inválido, começa com lista vazia
            self.historico_completo = []

        # Popula o Listbox (dos mais antigos para os mais novos)
        self.hist_listbox.delete(0, tk.END)
        for item in self.historico_completo:
            texto_display = f"[{item['timestamp']}] {item['content']}"
            # Insere no final (tk.END) para manter a ordem cronológica
            self.hist_listbox.insert(tk.END, texto_display)
        
        # Rola para o final para ver os itens mais recentes
        self.hist_listbox.yview_moveto(1.0)

    def AdicionarAoHistorico(self, content):
        """Adiciona um novo item ao histórico (UI, memória e JSON)."""
        
        # 1. Cria o timestamp e o novo item
        agora_str = datetime.now().strftime("%Y-%m-%d %H:%M:%S")
        novo_item = {"timestamp": agora_str, "content": content}
        
        # 2. Formata para exibição
        texto_display = f"[{agora_str}] {content}"

        # 3. Adiciona à UI (Listbox)
        self.hist_listbox.insert(tk.END, texto_display)
        self.hist_listbox.yview_moveto(1.0) # Rola para o final

        # 4. Adiciona à lista em memória
        self.historico_completo.append(novo_item)

        # 5. Salva a lista *completa* no arquivo JSON
        try:
            with open(CAMINHO_ARQUIVO, "w", encoding="utf-8") as arquivo:
                # ensure_ascii=False para salvar "ç" e acentos corretamente
                json.dump(self.historico_completo, arquivo, indent=4, ensure_ascii=False)
        except IOError as e:
            print(f"Erro crítico ao salvar histórico no JSON: {e}")

    def LimparHistorico(self):
        """Limpa a UI, a lista em memória e o arquivo JSON."""
        # Limpa UI
        self.hist_listbox.delete(0, tk.END)
        
        # Limpa memória
        self.historico_completo = []
        
        # Limpa Disco (salvando uma lista vazia)
        try:
            with open(CAMINHO_ARQUIVO, "w", encoding="utf-8") as arquivo:
                json.dump([], arquivo)
            print("Histórico limpo.")
        except IOError as e:
            print(f"Erro ao limpar arquivo de histórico: {e}")

    def CopiarSelecionado(self, event=None):
        """Pega o item selecionado e copia APENAS o conteúdo."""
        try:
            indices_selecionados = self.hist_listbox.curselection()
            if not indices_selecionados:
                return 

            index = indices_selecionados[0]
            texto_display = self.hist_listbox.get(index)
            
            # --- Lógica para extrair o conteúdo ---
            # Ex: "[2025-11-03 19:48:00] Meu texto"
            # Queremos "Meu texto"
            
            partes = texto_display.split('] ', 1) # Divide no primeiro "] "
            
            if len(partes) == 2:
                texto_a_copiar = partes[1] # Pega a segunda parte
            else:
                texto_a_copiar = texto_display # Fallback (caso não ache o formato)
            
            self.copiador.Copiar(texto_a_copiar)
            
            self.ultimo_conteudo = texto_a_copiar
            
            print(f"Texto copiado: {texto_a_copiar[:30]}...")

        except tk.TclError as e:
            print(f"Erro ao tentar copiar do Listbox: {e}")

    def MonitorarClipboard(self):
        """Verifica se o conteúdo da área de transferência mudou."""
        
        conteudo_atual = self.copiador.Colar()

        if conteudo_atual != self.ultimo_conteudo:
            # Só adiciona se o conteúdo for novo E não for vazio
            if conteudo_atual:
                print(f"Clipboard alterado: {conteudo_atual[:30]}...") 
                
                # Atualiza o estado
                self.ultimo_conteudo = conteudo_atual
                
                # Chama o método que faz o trabalho pesado
                self.AdicionarAoHistorico(conteudo_atual)
            else:
                # Se o clipboard foi "limpo" (ficou vazio), 
                # apenas atualiza o estado
                self.ultimo_conteudo = ""

        # Agenda a próxima verificação
        self.root.after(500, self.MonitorarClipboard)