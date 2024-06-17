#include <stdio.h>
#include <math.h>
#define pi 3.14159265358979323846

int main() {
    double r, area;

    printf("Digite o valor do raio do circulo: ");
    scanf("%lf", &r);

    area = pi*pow(r,2.0);

    printf("AREA  = %.3lf", area);

    return 0;
}