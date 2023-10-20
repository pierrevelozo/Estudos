print('\nALUGUEL DE CARROS\n')
dias = int(input('Quantidade de dias alugados: '))
km = float(input('Quantidade de Km rodados: '))
print('\nValor total do aluguel: R${:.2f}\n'.format( dias * 60 + km * 0.15 ))

