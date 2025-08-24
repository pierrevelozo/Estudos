#include <stdio.h>

#define TAM_PAR 3
#define TAM_IMPAR 4

int maior(int valores[], int tamanhoValores);

int main(void){
    int primeiroValor;
    int segundoValor;
    int terceiroValor;
    int quartoValor;

    printf("Primeiro valor: ");
    scanf("%i", &primeiroValor);
    printf("Segundo valor: ");
    scanf("%i", &segundoValor);
    
    if (primeiroValor == segundoValor) return 0;
    
    printf("Terceiro valor: ");
    scanf("%i", &terceiroValor);

    printf("\n");

    if ((primeiroValor % 2) == 0){
        int valores[TAM_PAR] = {primeiroValor, segundoValor, terceiroValor};
        printf("Maior valor: %i\n", maior(valores, TAM_PAR));
    }

    else {
        printf("Quarto valor: ");
        scanf("%i", &quartoValor);
        int doisPrimeiros[2] = {primeiroValor, segundoValor};
        int doisUltimos[2] = {terceiroValor, quartoValor};

        printf("Maior valor entre %i e %i: %i\n", primeiroValor, segundoValor, maior(doisPrimeiros, 2));
        printf("Maior valor entre %i e %i: %i\n", terceiroValor, quartoValor, maior(doisUltimos, 2));
    }

}

int maior(int valores[], int tamanhoValores){

    int maiorValor = valores[0];
    for (int i = 0; i < tamanhoValores; i++){
        if (valores[i] > maiorValor){
            maiorValor = valores[i];
        }
    }
    
    return maiorValor;
}