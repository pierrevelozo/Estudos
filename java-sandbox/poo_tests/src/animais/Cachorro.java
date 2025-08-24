package animais;

public class Cachorro extends Animal{
    @Override
    public void comer() {
        System.out.println("O cachorro come ração ou comida de panela.");
    }

    @Override
    public void beber() {
        System.out.println("Ele bebe água em uma tigela.");
    }

    @Override
    public void dormir() {
        System.out.println("Ele dorme em camas ou no chão.");
    }
}
