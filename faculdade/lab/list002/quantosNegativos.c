#include <stdio.h>

int main(void){
    float valores[20];
    printf("Insira um valor: ");
    scanf("%f", &valores[1]);
    float menor = valores[1];

    for (int i = 1; i < 20; i++){
        printf("Insira um valor: ");
        scanf("%f", &valores[i]);

        if (valores[i] < menor) menor = valores[i];
    }

    printf("Menor: %.2f\n", menor);

    return 0;
}