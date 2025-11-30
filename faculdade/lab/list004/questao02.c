#include <stdio.h>

// Gerar (sem ler) e imprimir uma matriz de 10 linhas e 10 colunas cujos elementos são 1, 2, 3, ... , 99, 100

int main(void) {
    int matriz[10][10];
    int contador = 1;

    for (int i = 0; i < 10; i++){
        for (int j = 0; j < 10; j++)
        {
            matriz[i][j] = contador;
            contador++;
        }
    }

    for (int i = 0; i < 10; i++){
        for (int j = 0; j < 10; j++)
        {
            printf("%i ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}
