package animais;

public class Peixe extends Animal{

    @Override
    public void comer() {
        System.out.println("O peixe come algas, insetos, outros peixes menores ou ração.");
    }

    @Override
    public void beber() {
        System.out.println("Ele bebe a água em que vive, absorvendo-a pelas brânquias e pele.");
    }

    @Override
    public void dormir() {
        System.out.println("Ele não dorme como a gente. Em vez de fechar os olhos, ele fica mais parado e menos ativo, mas continua em alerta.");
    }
}
