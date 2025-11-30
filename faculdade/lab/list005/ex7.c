#include <stdio.h>

int idadeEmDias(int anos);

int main() {
    int anos, dias;

    printf("Digite sua idade em anos: ");
    scanf("%d", &anos);

    dias = idadeEmDias(anos);

    printf("%d anos equivalem a %d dias (ignora bissextos).\n", anos, dias);

    return 0;
}

int idadeEmDias(int anos) {
    return anos * 365;
}