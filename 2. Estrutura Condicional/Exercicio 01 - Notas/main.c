#include <stdio.h>

int main() {
    double primeira, segunda, final;

    printf("Digite a primeira nota: ");
    scanf("%lf", &primeira);
    printf("Digite a segunda nota: ");
    scanf("%lf", &segunda);

    final = primeira + segunda;

    if (final >= 60) {
        printf("NOTA FINAL = %.1lf", final);
    }
    else {
        printf("NOTA FINAL = %.1lf\n", final);
        printf("REPROVADO");
    }

    return 0;
}