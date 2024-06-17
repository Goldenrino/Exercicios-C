#include <stdio.h>

int main() {

    int qnt, x, i, dentro, fora;

    printf("Quantos numeros voce vai digitar? ");
    scanf("%d", &qnt);

    dentro = 0;
    fora = 0;
    
    for (int i = 1; i <= qnt; i++)
    {
        printf("Digite um numero: ");
        scanf("%d", &x);
        if (x >= 10 && x <= 20)
        {
            dentro++;
        }
        else{
            fora++;
        }  
    }

    printf("%d DENTRO\n", dentro);
    printf("%d FORA\n", fora);

    return 0;
}