#include <stdio.h>

int main() {

    int n, i, multi;

    printf("Deseja a tabuada para qual valor? ");
    scanf("%d", &n);

    
    for (int i = 1; i <= 10; i++)
    {
        multi = n * i;
        printf("%d x %d = %d\n", n, i, multi);
    }

    return 0;
}