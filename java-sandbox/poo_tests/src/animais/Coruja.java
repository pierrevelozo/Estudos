package animais;

public class Coruja extends Animal{
    @Override
    public void comer() {
        System.out.println("A coruja come roedores e insetos.");
    }

    @Override
    public void beber() {
        System.out.println("Ela bebe água da chuva ou de rios.");
    }

    @Override
    public void dormir() {
        System.out.println("Ela dorme em ninhos ou no alto das árvores.");
    }
}
