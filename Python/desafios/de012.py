p = float(input('Preço do produto: '))
print('O produto que custava R${:.2f}, agora com os 5% de desconto aplicados, custa R${:.2f}' .format(p, p - (p * 0.05) ))
