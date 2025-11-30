#include <stdio.h> // Para printf() e scanf()

int lerInteiro();
void escreverInteiro(int valor);


// Função principal
int main() {
    int meuNumero;

    // 1. Chamamos a função, que nos *retorna* um valor
    meuNumero = lerInteiro();
    
    // 2. Passamos esse valor como *parâmetro* para a procedure
    escreverInteiro(meuNumero);

    return 0; // Sucesso!
}

int lerInteiro() {
    int num;
    printf("Digite um número: ");
    scanf("%d", &num);
    return num;
}

void escreverInteiro(int valor) {
    printf("O valor recebido foi: %d\n", valor);
}