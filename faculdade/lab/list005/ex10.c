#include <stdio.h>

void verificaSinal(int num);

int main() {
    int numero;

    printf("Digite um número (positivo, negativo ou zero): ");
    scanf("%d", &numero);

    verificaSinal(numero); 
    
    return 0;
}

void verificaSinal(int num) {
    if (num > 0) {
        printf("O número %d é POSITIVO.\n", num);
    } else if (num < 0) {
        printf("O número %d é NEGATIVO.\n", num);
    } else {
        printf("O número é ZERO (Neutro).\n");
    }
}