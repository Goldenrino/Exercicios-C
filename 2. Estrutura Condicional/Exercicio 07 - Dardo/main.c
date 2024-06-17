#include <stdio.h>

int main() {
    double x, y, z;

    printf("Digite as tres distancias:\n");
    scanf("%lf", &x);
    scanf("%lf", &y);
    scanf("%lf", &z);

    if ((x >= y && x >= z)) {
        printf("MAIOR DISTANCIA = %.2lf", x);
    }
    else if ( y >= z) {
        printf("MAIOR DISTANCIA = %.2lf", y);
    }
    else {
        printf("MAIOR DISTANCIA = %.2lf", z);
    }

    return 0;
}