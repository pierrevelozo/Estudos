###
### Mine Sweeper part 1
###
import random

### Settings

qtBombas = 5
qtBandeiras = 0
largura = 5
altura = 5
valorBomba = 9
tabuleiro = []
tabStatus = []
tabBandeiras = []
valorPadrao = 0

def CriaTabuleiro(tabuleiro, altura, largura, valorPadrao):

    for x in range(0, largura):
        linha = []
        for y in range(0, altura):
            linha.append(valorPadrao)
        tabuleiro.append(linha)

###
def MostraTabuleiro(tabuleiro):
    for x in range(0, len(tabuleiro)):
        print(tabuleiro[x])

###
def CriaBombas(tabuleiro, qrBombas, valorBomba):
    for x in range(0, qtBombas):
        posX = random.randint(0, largura - 1)
        posY = random.randint(0, altura - 1)

        while tabuleiro[posX][posY] == valorBomba:
            posX = random.randint(0, largura - 1)
            posY = random.randint(0, altura - 1)
        if tabuleiro[posX][posY] != valorBomba:
                tabuleiro[posX][posY] = valorBomba


CriaTabuleiro(tabuleiro, altura, largura, valorPadrao)
CriaBombas(tabuleiro, qtBombas, valorBomba)
MostraTabuleiro(tabuleiro)