nome = str(input('Digite seu nome completo: ')).strip()
print(nome.upper())
print(nome.lower())

re = nome.replace(' ', '')
print(len(re))

div = nome.split()
print(len(div[0]))
