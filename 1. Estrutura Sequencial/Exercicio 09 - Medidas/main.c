#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c, quadrado, triangulo, trapezio;

    printf("Digite a medida A: ");
    scanf("%lf", &a);
    printf("Digite a medida B: ");
    scanf("%lf", &b);
    printf("Digite a medida C: ");
    scanf("%lf", &c);

    quadrado = pow(a , 2.0);
    triangulo = (a * b) / 2;
    trapezio = ((a + b) * c) / 2;

    printf("AREA DO QUADRADO =  %.4lf\n", quadrado);
    printf("AREA DO TRIANGULO =  %.4lf\n", triangulo);
    printf("AREA DO TRAPEZIO =  %.4lf\n", trapezio);

    return 0;
}