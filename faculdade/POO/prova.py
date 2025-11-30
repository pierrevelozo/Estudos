class Veiculo:
    def __init__(self, _veiculo: str):
        self.set_veiculo(_veiculo)

    def set_veiculo(self, _veiculo: str):
        self.veiculo = _veiculo

    def get_veiculo(self) -> str:
        return self.veiculo

    def freiar(self):
        print(f"{self.get_veiculo()} está freando...")

    def acelerar(self):
        print(f"{self.get_veiculo()} está acelerando...")

    def buzinar(self):
        print(f"{self.get_veiculo()} está buzinando...")

    def quantasRodas(self):
        print(f"{self.get_veiculo()} tem 0 rodas...")

    def marca(self):
        print(f"{self.get_veiculo()} não possui marca...")
    
# Quantidade de rodas:

class DuasRodas(Veiculo):
    def quantasRodas(self):
        print(f"{self.get_veiculo()} tem 2 rodas...")

class QuatroRodas(Veiculo):
    def quantasRodas(self):
        print(f"{self.get_veiculo()} tem 4 rodas...")

# Tipo de veículos:

class Bicicleta(DuasRodas):
    def buzinar(self):
        print(f"{self.get_veiculo()} está buzinando: Trim... trim...")

class Moto(DuasRodas):
    def buzinar(self):
        print(f"{self.get_veiculo()} está buzinando: Fon... fon...")

class Carro(QuatroRodas):
    def buzinar(self):
        print(f"{self.get_veiculo()} está buzinando: Bii... bii...")

class Caminhao(QuatroRodas):
    def buzinar(self):
        print(f"{self.get_veiculo()} está buzinando: FOM!!! FOM!!!")

# Marcas dos veículos

class Caloi(Bicicleta):
    def marca(self):
        print(f"{self.get_veiculo()} é uma Caloi...")

class Sense(Bicicleta):
    def marca(self):
        print(f"{self.get_veiculo()} é uma Sense...")

class Honda(Moto):
    def marca(self):
        print(f"{self.get_veiculo()} é uma Honda...")

class Yamaha(Moto):
    def marca(self):
        print(f"{self.get_veiculo()} é uma Yamaha...")

class Fiat(Carro):
    def marca(self):
        print(f"{self.get_veiculo()} é uma Fiat...")

class Volkswagen(Carro):
    def marca(self):
        print(f"{self.get_veiculo()} é uma Volkswagen...")

class MercedezBenz(Caminhao):
    def marca(self):
        print(f"{self.get_veiculo()} é uma Mercedez-Benz...")

class Scania(Caminhao):
    def marca(self):
        print(f"{self.get_veiculo()} é uma Scania...")

# Execução main

if __name__ == '__main__':

    veiculo = None
    menu = int(input(f"Bicicleta [1]\nMoto [2]\nCarro [3]\nCaminhão [4]\nQual veículo? "))

    match menu:
        case 1:

            marca = int(input(f"\nCaloi [1]\nSense [2]\nQual marca da bicicleta? "))

            match marca:
                case 1:
                    veiculo = Caloi("Veículo")
                case 2:
                    veiculo = Sense("Veículo")
        case 2:

            marca = int(input(f"\nHonda [1]\nYamaha [2]\nQual marca da moto? "))

            match marca:
                case 1:
                    veiculo = Honda("Veículo")
                case 2:
                    veiculo = Yamaha("Veículo")
        case 3:
            
            marca = int(input(f"\nVolkswagen [1]\nFiat [2]\nQual marca do carro? "))

            match marca:
                case 1:
                    veiculo = Volkswagen("Veículo")
                case 2:
                    veiculo = Fiat("Veículo")
        case 4:

            marca = int(input(f"\nMercedes-Benz [1]\nScania [2]\nQual marca da caminhão? "))

            match marca:
                case 1:
                    veiculo = MercedezBenz("Veículo")
                case 2:
                    veiculo = Scania("Veículo")
      
    veiculo.acelerar()
    veiculo.freiar()
    veiculo.buzinar()
    veiculo.quantasRodas()
    veiculo.marca()

