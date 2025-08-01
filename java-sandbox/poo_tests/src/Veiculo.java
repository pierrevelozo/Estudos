public class Veiculo {
    private float velocidade = 0;

    public void setVelocidade(float setVelocidade){
        velocidade = setVelocidade;
    }

    public float getVelocidade(){
        return velocidade;
    }

    public void exibirVelocidade(){
        System.out.println("Velocidade atual é " + getVelocidade());
    }

    public void acelerar(float aceleracao){
        if (aceleracao > 0) {
            velocidade += aceleracao;
        }
    }
}