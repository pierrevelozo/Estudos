#include <stdio.h>

// Criar e imprimir a matriz identidade MI[1..7,1..7] em que todos os elementos da diagonal principal são iguais a 1 e os demais são zero.

int main(void){
    int matriz[7][7];

    for (int i = 0; i < 7; i++)
    {
        for (int j = 0; j < 7; j++)
        {
            if (i == j){
                matriz[i][j] = 1;
            }
            else matriz[i][j] = 0;
        }
    }

    for (int i = 0; i < 7; i++){
        for (int j = 0; j < 7; j++)
        {
            printf("%i ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}