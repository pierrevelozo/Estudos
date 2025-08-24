#include <stdio.h>

int main(void){
    float valorIngresso;
    char categoria;
    float desconto;

    printf("Valor do ingresso: ");
    scanf("%f", &valorIngresso);

    printf("Categoria do ingresso:\nEstudante (E), Aposentado (A), Normal (N)\n");
    getchar();
    scanf("%c", &categoria);

    switch (categoria)
    {
        case 'E':
        case 'e':
            printf("Categoria: Estudante\n");
            desconto = 0.5;
            break;
    
        case 'A':
        case 'a':
            printf("Categoria: Aposentado\n");
            desconto = 0.7;
            break;
        
        case 'N':
        case 'n':
            printf("Categoria: Normal\n");
            desconto = 0;
            break;
    
        default:
            printf("Categoria inválida.\n");
            break;
    }

    float valorAjustado = valorIngresso * desconto;
    printf("Valor ajustado: R$%.2f\n", valorAjustado);
}