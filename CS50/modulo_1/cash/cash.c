#include <cs50.h>
#include <stdio.h>

float troco(void);

float verificacao(float moeda, float troco, int contagem);





int main(void)
{
    // Moedas

    float m25, m10, m5, m1 = 0;

    float t = troco();

    printf("\nTroco: $%.2f\n\n", t);

    if (t > 0.01)
    {
        t = verificacao(0.25, t, m25);

        t = verificacao(0.10, t, m10);

        t = verificacao(0.049, t, m5);

        t = verificacao(0.01, t, m1);

        printf("\n");
    }
}





// Verificação de moedas

float verificacao(float moeda, float troco, int contagem)
{
    while (moeda <= troco)
    {
        if(moeda <= troco)
        {
            troco -= moeda;
            contagem++;
        }
    }

    float m;

    if (moeda == (float) 0.25)
    {
        m = 25;
    }
    else if (moeda == (float) 0.10)
    {
        m = 10;
    }
    else if (moeda == (float) 0.049)
    {
        m = 5;
    }
    else 
    {
        m = 1;
    }
    
    printf("%.0f¢: %i\n", m, contagem);
    
    
    return troco;
}





// Perguntas

float troco(void)
{
    float preco, pago;

    printf("\n");

    do
    {
        preco = get_float("Preço do Produto: $");
    } 
    while (preco <= 0);
    
    do
    {
        pago = get_float("Pago em dinheiro: $");
    } 
    while (pago <= 0 || pago - preco < 0);
    
    return pago - preco;
}