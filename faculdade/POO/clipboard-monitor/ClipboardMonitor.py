import pyperclip
import time
import threading

class ClipboardMonitor:
    def __init__(self, callback=None, intervalo=0.5):
        """
        Monitora alterações na área de transferência usando polling.
        :param callback: Função chamada quando o texto muda.
        :param intervalo: Tempo (em segundos) entre verificações.
        """
        self.callback = callback
        self.intervalo = intervalo
        self.ultimo_texto = ""
        self.ativo = False
        self.thread = None

    def iniciar(self):
        """Inicia o monitoramento em uma thread separada."""
        if not self.ativo:
            self.ativo = True
            self.thread = threading.Thread(target=self._monitorar, daemon=True)
            self.thread.start()

    def parar(self):
        """Interrompe o monitoramento."""
        self.ativo = False

    def _monitorar(self):
        """Loop de verificação (polling)."""
        while self.ativo:
            try:
                texto_atual = pyperclip.paste()
                if texto_atual != self.ultimo_texto:
                    self.ultimo_texto = texto_atual
                    if self.callback:
                        self.callback(texto_atual)
            except pyperclip.PyperclipException:
                pass  # Pode ignorar erros se o clipboard estiver inacessível

            time.sleep(self.intervalo)
