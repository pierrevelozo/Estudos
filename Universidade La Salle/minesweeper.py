###
### Mine Sweeper part 1
###

### Settings

qtBombas = 4
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

CriaTabuleiro(tabuleiro, altura, largura, valorPadrao)
MostraTabuleiro(tabuleiro)
