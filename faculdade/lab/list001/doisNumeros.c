#include <stdio.h>

#define TAMANHO_PAR 3
#define TAMANHO_IMPAR 4

int maior(int valores[], int tamanhoValores);

int main(void){
    int primeiroValor;
    int segundoValor;

    printf("Primeiro valor: ");
    scanf("%d", &primeiroValor);

    printf("Segundo valor: ");
    scanf("%d", &segundoValor);
    
    if (primeiroValor == segundoValor) return 0;
    
    int terceiroValor;

    printf("Terceiro valor: ");
    scanf("%d", &terceiroValor);

    if ((primeiroValor % 2) == 0){
        int valores[TAMANHO_PAR] = {primeiroValor, segundoValor, terceiroValor};
        
        printf("\n");
        printf("Maior valor: %d\n", maior(valores, TAMANHO_PAR));
        return 0;
    }

    int quartoValor;

    printf("Quarto valor: ");
    scanf("%d", &quartoValor);

    int doisPrimeiros[2] = {primeiroValor, segundoValor};
    int doisUltimos[2] = {terceiroValor, quartoValor};

    int maiorDoisPrimeiros = maior(doisPrimeiros, 2);
    int maiorDoisUltimos = maior(doisUltimos, 2);

    printf("\n");

    if (maiorDoisPrimeiros < maiorDoisUltimos){
        printf("Maior valor entre %d e %d: %d\n", primeiroValor, segundoValor, maior(doisPrimeiros, 2));
        printf("Maior valor entre %d e %d: %d\n", terceiroValor, quartoValor, maior(doisUltimos, 2));
            
        return 0;
    }
    
    printf("Maior valor entre %d e %d: %d\n", terceiroValor, quartoValor, maior(doisUltimos, 2));
    printf("Maior valor entre %d e %d: %d\n", primeiroValor, segundoValor, maior(doisPrimeiros, 2));

    return 0;
}

int maior(int valores[], int tamanhoValores){
    int maiorValor = valores[0];

    for (int i = 0; i < tamanhoValores; i++){
        if (valores[i] > maiorValor) maiorValor = valores[i];
    }
    
    return maiorValor;
}