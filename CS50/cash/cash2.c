#include "cs50.h"
#include <stdio.h>

float troco(void);

int main(void)
{
    // Moedas

    float m25 = 0.25;
    float m10 = 0.10;
    float m5 = 0.05;
    float m1 = 0.01;

    float t = troco();

    printf("\nTroco: $%.2f\n\n", t);

    while (t > 0)
    {
        while (m25 <= t)
        {
            t -= m25;
        } 

        while (m10 <= t)
        {
            t -= m10;
        } 

        while (m5 <= t)
        {
            t -= m5;
        } 

        while (m1 <= t)
        {
            t -= m1;
        } 

    }
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