#include <stdio.h>

int main(void){
    float valor;
    printf("Atribua um valor: ");
    scanf("%f", &valor);

    if (valor < 0){
        printf("%.2f é negativo.", valor);
        return 0;
    }
    printf("%.2f é positivo.", valor);
    return 0;
}
