package veiculos;

public class Moto extends Veiculo{
    public void empinar(){
        System.out.println("empinando...");
    }

    @Override
    public void acelerar(float aceleracao){
        if (aceleracao > 0) {
            setVelocidade(getVelocidade() + aceleracao);
            System.out.println("veiculos.Moto acelerando...");
        }
    }
}
