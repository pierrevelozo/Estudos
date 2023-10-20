from math import hypot, sqrt

co = float(input('Cateto oposto: '))
ca = float(input('Cateto adjacente: '))

print('A hipotenusa vai medir {:.2f}'.format(hypot(co, ca)))

#Mesmo resultado, mas usando sem o módulo hypot
print('A hipotenusa vai medir {:.2f}'.format( sqrt( co * co + ca * ca ) ))
