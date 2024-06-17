#include <stdio.h>

int main() {
    char escala;
    double celsius, fahrenheit;

    printf("Voce vai digitar a temperatura em qual escala (C/F)? ");
    scanf("%c", &escala);

    if (escala == 'F') {
        printf("Digite a temperatura em Fahrenheit: ");
            scanf("%lf", &fahrenheit);
        
        celsius = (fahrenheit - 32) / 1.8;
        printf("Temperatura equivalente em Celsius: %.2lf", celsius);
    }
    else {
        printf("Digite a temperatura em Celsius: ");
            scanf("%lf", &celsius);
        
        fahrenheit = (celsius * 1.8) + 32;
        printf("Temperatura equivalente em Fahrenheit: %.2lf", fahrenheit);
    }

    return 0;
}