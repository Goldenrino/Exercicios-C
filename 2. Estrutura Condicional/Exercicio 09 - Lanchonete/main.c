#include <stdio.h>

int main() {
    int produto, qtd;
    double preco;

    printf("Codigo do produto comprado: ");
    scanf("%d", &produto);

    printf("Quantidade comprada: ");
    scanf("%d", &qtd);

    if (produto == 1) {
        preco = qtd * 5.00;
    }
    else if (produto == 2) {
        preco = qtd * 3.50;
    }
    else if (produto == 3) {
        preco = qtd * 4.80;
    }
    else if (produto == 4) {
        preco = qtd * 8.90;
    }
    else if (produto == 5) {
        preco = qtd * 7.32;
    }

	printf("Valor a pagar: R$ %.2lf\n", preco);

	return 0;
}