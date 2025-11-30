import pyperclip

class Clipboard:
    """
    Uma classe encapsuladora para interagir com a 
    área de transferência do sistema.
    """
    
    def Copiar(self, texto):
        """Define o conteúdo da área de transferência."""
        try:
            pyperclip.copy(texto)
        except pyperclip.PyperclipException as e:
            print(f"Erro ao copiar: {e}")

    def Colar(self):
        """Lê o conteúdo da área de transferência."""
        try:
            return pyperclip.paste()
        except pyperclip.PyperclipException as e:
            print(f"Erro ao colar: {e}")
            return "" # Retorna vazio em caso de erro