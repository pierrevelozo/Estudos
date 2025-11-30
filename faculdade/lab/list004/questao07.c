#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Dada a matriz M[1..4,1..7], criar e imprimir um vetor S[1..4] em que cada elemento contém a soma dos elementos de uma linha de M.

int main() {
    int linhas = 4, colunas = 7;
    int M[4][7];
    int S[4];

    srand(time(NULL));

    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            M[i][j] = rand() % 100;
        }
    }

    printf("Matriz gerada aleatoriamente:\n");
    for (int i = 0; i < linhas; i++) {
        int somador = 0;
        for (int j = 0; j < colunas; j++) {
            printf("%3d ", M[i][j]);
            somador += M[i][j];
        }
        S[i] = somador;
        printf("\n");
    }

    printf("Vetor S em que cada elemento contém a soma dos elementos de uma linha de M: \n");
    for (int i = 0; i < 4; i++)
    {
        printf(" %i", S[i]);
    }
    printf("\n");

    return 0;
}