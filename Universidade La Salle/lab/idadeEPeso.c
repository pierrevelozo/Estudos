#include <stdio.h>

const char* classificar(int idade, float peso);

int main(void){
    int idade;
    printf("Idade: ");
    if (scanf("%d", &idade) != 1) 
    {
        printf("Entrada inválida.\n");
        return 1;
    }

    if (idade <= 12) 
    {
        printf("Infantil.\n");
        return 0;
    }
    else if (idade > 24)
    {
        printf("Veterano.\n");
        return 0;
    }

    float peso;
    printf("Peso: ");

    if (scanf("%f", &peso) != 1)
    {
        printf("Entrada inválida.\n");
        return 1;
    }
    
    printf("%s\n", classificar(idade, peso));
    return 0;
}

const char* classificar(int idade, float peso) {
    if (idade >= 13 && idade <= 16) {
        return (peso <= 40) ? "Juvenil leve.\n" : "Juvenil pesado.\n";
    }
    else if (idade >= 17 && idade <= 24) {
        if (peso <= 45) return "Senior leve.\n";
        else if (peso <= 60) return "Senior médio.\n";
        else return "Senior pesado.\n";
    }

    return "Categoria indefinida.\n";
}