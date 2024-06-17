#include <stdio.h>

int main() {
    int quantidade;
    double produto, dinheiro, troco, faltou;

    printf("Preço unitário do produto: ");
    scanf("%lf", &produto);
    printf("Quantidade comprada: ");
    scanf("%d", &quantidade);
    printf("Dinheiro recebido: ");
    scanf("%lf", &dinheiro);

    troco = dinheiro - (produto * quantidade);
    faltou = troco * (-1);

    if (troco < 0) {
        printf("DINHEIRO INSUFICIENTE. FALTAM %.2lf REAIS", faltou);
    }
    else {
        printf("TROCO = %.2lf", troco);
    }

    return 0;
}