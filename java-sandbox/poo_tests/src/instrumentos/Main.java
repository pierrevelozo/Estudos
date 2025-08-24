package instrumentos;

public class Main {
    public static void main(String[] args) {
        Instrumento[] instrumentos = {
                new Violino(),
                new Bateria(),
                new Flauta()
        };

        for (Instrumento i : instrumentos){
            i.tocar();
            System.out.println(" ");
        }
    }
}
