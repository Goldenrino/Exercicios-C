#include <stdio.h>

int main() {
    int primeiro, segundo, terceiro;

    printf("Primeiro valor: ");
    scanf("%d", &primeiro);
    printf("Segundo valor: ");
    scanf("%d", &segundo);
    printf("Terceiro valor: ");
    scanf("%d", &terceiro);

    if ((primeiro <= segundo && primeiro <= terceiro)) {
        printf("MENOR = %d", primeiro);
    }
    else if (( segundo <= terceiro)) {
        printf("MENOR = %d", segundo);
    }
    else {
        printf("MENOR = %d", terceiro);
    }

    return 0;
}