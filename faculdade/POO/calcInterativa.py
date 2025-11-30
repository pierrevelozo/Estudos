import random

class sorteio:
    def __init__(self):
        self.numAleatorio = 0

    def realizar_sorteio(self) -> int:
        self.numAleatorio = random.randint(1, 100)
        return self.numAleatorio
    
    def sortearOperacao(self) -> str:
        operacoes = ['+', '-']
        return random.choice(operacoes)

if __name__ == "__main__":
    primeiroNumero = sorteio().realizar_sorteio()
    segundoNumero = sorteio().realizar_sorteio()
    operacao = sorteio().sortearOperacao()

    print(f"{primeiroNumero} {operacao} {segundoNumero}")

    if operacao == '+':
        numeroSorteado = primeiroNumero + segundoNumero
    else:
        numeroSorteado = primeiroNumero - segundoNumero

while True:
    numeroSugerido = int(input("Adivinhe o número: ")) 
    
    if (numeroSugerido < numeroSorteado):
        print("O número sorteado é maior")

    elif (numeroSugerido > numeroSorteado):
        print("O número sorteado é menor")

    else:
        print("Parabéns, você acertou!") 
        break
