package animais;

public class Main {
    public static void main(String[] args){
        Animal[] animais = {
                new Cachorro(),
                new Coruja(),
                new Peixe()
        };

        for (Animal animal : animais){
            animal.comer();
            animal.beber();
            animal.dormir();
            System.out.println("\n");
        }
    }
}
