#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAMANHO 20

int main(void){
    int vetorAleatorio[TAMANHO];
    vetorAleatorio[0] = rand() % 100;
    int contaPares = 0;
    int ehUnico;
    int numeroGerado;

    srand(time(NULL));

    for (int i = 0; i < TAMANHO; i++) {
        do {
            numeroGerado = rand() % 100;
            ehUnico = 1;
            for (int j = 0; j < i; j++) {
                if (vetorAleatorio[j] == numeroGerado) {
                    ehUnico = 0; 
                    break; 
                }
            }
        } while (!ehUnico); 
        vetorAleatorio[i] = numeroGerado;
        printf("%d: %d\n", i + 1, vetorAleatorio[i]);
    }
    
    for (int i = 0; i < TAMANHO; i++) {
        if (vetorAleatorio[i] % 2 == 0)
        {
            contaPares++;
        }
        
    }

    printf("Números de pares: %d\n", contaPares);

    return 0;
}