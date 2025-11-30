#include <stdio.h>

int verificaPar(int num);

int main() {
    int numero, resultado;

    printf("Digite um número para verificar: ");
    scanf("%d", &numero);

    resultado = verificaPar(numero);

    if (resultado == 1) {
        printf("O número é PAR (Código: %d)\n", resultado);
    } else {
        printf("O número é ÍMPAR (Código: %d)\n", resultado);
    }

    return 0;
}

int verificaPar(int num) {
    if (num % 2 == 0) {
        return 1;
    } else {
        return 2;
    }
}