public class Veiculo {
    private float velocidade;

    public void setVelocidade(float setVelocidade) {
        velocidade = setVelocidade;
    }

    public float getVelocidade() {
        return velocidade;
    }

    public void exibirVelocidade(){
        System.out.println("Velocidade: " + getVelocidade() + " km/h");
    }

    public void acelerar(float aceleracao){
        if (aceleracao > 0) {
            setVelocidade(getVelocidade() + aceleracao);
            System.out.println("Veículo acelerando...");
        }
    }
}