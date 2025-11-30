class Figura:
    def __init__(self, lados: int):
        self.lado = lados

    def verificarFigura(self):
        if (self.lado[0] == self.lado[1]) and (self.lado[2] == self.lado[3]) and (self.lado[0] != self.lado[3]):
            self.figura = Retangulo()

        elif (self.lado[0] == self.lado[1]) and (self.lado[2] == self.lado[3]):
            self.figura = Quadrado()

        else:
            self.figura = Trapezio()

        print(self.lado)
    
    def area(self) -> str:
        self.perimetro = sum(self.lado)
        print(f"O perimetro do ")
        print(self.verificarFigura())
        print(f"é {self.perimetro}.")

class Quadrado:
    def __init__(self):    
        print(f"quadrado!\n")
        
class Retangulo:
    def __init__(self):    
        print(f"retângulo!\n")                

class Trapezio:
    def __init__(self):    
        print(f"trapezio!\n")        

if __name__ == '__main__':
    lados = [0, 0, 0, 0]

    for i in range(len(lados)):
        lados[i] = int(input(f"Lado {i + 1}: "))
    
    Figura(lados).area()