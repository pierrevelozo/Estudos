public class Main {
    public static void main(String[] args) {
        //Carro audi = new Carro();

        //audi.setVelocidade(0);
        //audi.acelerar(100);
        //audi.exibirVelocidade();
        //audi.abrirPorta();

        //Moto honda = new Moto();

        //honda.setVelocidade(80);
        //honda.acelerar(25);
        //honda.exibirVelocidade();

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