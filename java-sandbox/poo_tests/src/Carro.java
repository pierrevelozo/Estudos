public class Carro extends Veiculo{
    public void abrirPorta() {
        System.out.println("Porta aberta...");
    }

    @Override
    public void acelerar(float aceleracao){
        if (aceleracao > 0) {
            setVelocidade(getVelocidade() + aceleracao);
            System.out.println("Carro acelerando...");
        }
    }
}
