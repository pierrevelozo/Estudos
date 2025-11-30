#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAMANHO 80

int main(void){
    int vetorAleatorio[TAMANHO];
    vetorAleatorio[0] = rand() % 1000;
    int menorValor = vetorAleatorio[0];
    int posicao = 0;
    int ehUnico;
    int numeroGerado;

    srand(time(NULL));

    for (int i = 0; i < TAMANHO; i++) {
        do {
            numeroGerado = rand() % 1000;
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
        if (vetorAleatorio[i] < menorValor){
            menorValor = vetorAleatorio[i];
            posicao = i + 1;
        }
    }

    printf("Menor Valor: %d \nPosição: %d\n", menorValor, posicao);

    return 0;
}