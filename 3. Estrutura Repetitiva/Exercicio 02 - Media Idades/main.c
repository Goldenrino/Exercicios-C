#include <stdio.h>

int main() {

    int idades, media, soma;
    double resultado;

    printf("Digite as idades:\n");
    scanf("%d", &idades);
    
    media = 0;
    soma = 0;

    while (idades > 0) {
        media = media + 1;
        soma = soma + idades;
        scanf("%d", &idades);
    }

    if (media == 0) {
            printf("IMPOSSIVEL CALCULAR");
        }
        else {
            resultado = (double)soma / media;
            printf("MEDIA = %.2lf", resultado);
        }

    return 0;
}