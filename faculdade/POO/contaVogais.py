class contaVogais:
    def __init__(self, string: str):
        self.string = string.upper()
        self.contaA = 0
        self.contaE = 0
        self.contaI = 0
        self.contaO = 0
        self.contaU = 0
        self.consoantes = 0

    def verificaVogais(self) -> int:
        for i in range(len(self.string)):
            match self.string[i]:
                case "A":
                    self.contaA += 1
                case "E":
                    self.contaE += 1
                case "I":
                    self.contaI += 1
                case "O":
                    self.contaO += 1
                case "U":
                    self.contaU += 1
                case _:
                    self.consoantes += 1
    
    def get_letras(self) -> int:
        return self.contaA, self.contaE, self.contaI, self.contaO, self.contaU
    
if __name__ == '__main__':

    string = contaVogais(input("Digite a string: "))
    string.verificaVogais()
    print(string.get_letras())
