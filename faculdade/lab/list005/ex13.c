#include <stdio.h>
#include <math.h> 

double calculaVolumeEsfera(double raio);

int main() {
    double r, volume;

    printf("Digite o raio da esfera: ");

    scanf("%lf", &r); 

    volume = calculaVolumeEsfera(r);

    printf("O volume da esfera de raio %.2f é %.4f\n", r, volume);

    return 0;
}

double calculaVolumeEsfera(double raio) {
    return (4.0 / 3.0) * M_PI * pow(raio, 3);
}