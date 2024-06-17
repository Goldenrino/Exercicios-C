#include <stdio.h>

int main() {
    int quantidade;
    double produto, dinheiro, troco;

    printf("Preço unitário do produto: ");
    scanf("%lf", &produto);
    printf("Quantidade comprada: ");
    scanf("%d", &quantidade);
    printf("Dinheiro recebido: ");
    scanf("%lf", &dinheiro);

    troco = dinheiro - (produto * quantidade);

    printf("TROCO  = %.2lf", troco);

    return 0;
}