#include <stdio.h>
#include <string.h>

void ler_texto(char *buffer, int length) {
fgets(buffer, length, stdin);
strtok(buffer, "\n");
}

int main() {
    char nome[50];
    int hora;
    double valor, pagamento;

    printf("Nome: ");
    ler_texto(nome, 50);
    printf("Valor por hora: ");
    scanf("%lf", &valor);
    printf("Horas trabalhadas: ");
    scanf("%d", &hora);

    pagamento = valor * hora;

    printf("O pagamento para %s deve ser %.2lf", nome, pagamento);

    return 0;
}