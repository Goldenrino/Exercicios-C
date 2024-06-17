#include <stdio.h>

int main() {

    int num, soma;

    printf("Digite um numero inteiro: ");
    scanf("%d", &num);

    
    while (num != 0) {
        if (num % 2 != 0){
            num = num + 1;
        }

    soma = (5 * num) + 20;

    printf("SOMA = %d\n", soma);

    printf("Digite um numero inteiro: ");
    scanf("%d", &num);
    }

    return 0;
}