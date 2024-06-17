#include <stdio.h>

int main() {

    int x, i;

    printf("Digite o valor de X: ");
    scanf("%d", &x);

    
    for (int i = 1; i <= x; i++)
    {
        if (i % 2 != 0)
        {
            printf("%d\n", i);
        }
        
    }

    return 0;
}