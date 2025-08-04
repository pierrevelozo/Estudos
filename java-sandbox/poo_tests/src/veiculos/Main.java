package veiculos;

public class Main {
    public static void main(String[] args) {
        //veiculos.Carro audi = new veiculos.Carro();

        //audi.setVelocidade(0);
        //audi.acelerar(100);
        //audi.exibirVelocidade();
        //audi.abrirPorta();

        //veiculos.Moto honda = new veiculos.Moto();

        //honda.setVelocidade(80);
        //honda.acelerar(25);
        //honda.exibirVelocidade();
        //honda.empinar();

        Veiculo[] veiculos = {
                new Carro(),
                new Moto(),
                new Carro(),
                new Moto()
        };

        for (Veiculo v : veiculos){
            v.acelerar(10);
            v.exibirVelocidade();
            System.out.println();
        }


    }
}