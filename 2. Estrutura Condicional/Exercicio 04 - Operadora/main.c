#include <stdio.h>

int main() {
    int minutos; 
    double valor;

    printf("Digite a quantidade de minutos: ");
    scanf("%d", &minutos);

    if (minutos > 100) {
        valor = 50 + ((double)minutos - 100)* 2;
        printf("Valor a pagar: R$%.2lf", valor);
    }
    else {
        printf("Valor a pagar: R$50.00");
    }

    return 0;
}