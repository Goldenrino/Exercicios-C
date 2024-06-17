#include <stdio.h>

int main() {
    double distancia, combustivel, consumo;

    printf("Distancia percorrida: ");
    scanf("%lf", &distancia);
    printf("Combustível gasto: ");
    scanf("%lf", &combustivel);

    consumo = distancia / combustivel;

    printf("Consumo medio = %.3lf", consumo);

    return 0;
}