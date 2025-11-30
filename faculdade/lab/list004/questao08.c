#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Dadas duas matrizes numéricas A, 5x5, e B, 5x5 criar e imprimir a matriz S, soma de A e B.

int main(void)
{
    int matrizA[5][5];
    int matrizB[5][5];
    int matrizS[5][5];

    srand(time(NULL));

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            matrizA[i][j] = rand() % 100;
            matrizB[i][j] = rand() % 100;
        }
    }

    printf("Matriz A gerada aleatoriamente:\n");
    for (int i = 0; i < 5; i++)
    {
        int somador = 0;
        for (int j = 0; j < 5; j++)
        {
            printf("%3d ", matrizA[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    printf("Matriz B gerada aleatoriamente:\n");
    for (int i = 0; i < 5; i++)
    {
        int somador = 0;
        for (int j = 0; j < 5; j++)
        {
            printf("%3d ", matrizB[i][j]);
        }
        printf("\n");
    }
    
    printf("\n");

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            matrizS[i][j] = matrizA[i][j] + matrizB[i][j];
        }
    }

    printf("Matriz S, soma de A e B:\n");
    for (int i = 0; i < 5; i++)
    {
        int somador = 0;
        for (int j = 0; j < 5; j++)
        {
            printf("%3d ", matrizS[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
