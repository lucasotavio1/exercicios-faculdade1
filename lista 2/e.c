#include <stdio.h>

int main() {
    int a, b, i, j, k;

    do {
        printf("Informe o primeiro valor: ");
        scanf("%d", &a);
        printf("Informe o segundo valor: ");
        scanf("%d", &b);
    } while (a > b);
    
    do {
        printf("Informe um valor de comparação: ");
        scanf("%d", &k);
    } while (b > k);

    for (i = a; i <= b; i++) {
        for (j = i; j <= b; j++) {
            if (i + j == k) {
                printf("%d+%d=%d\n", i, j, k);
            }
        }
    }

    return 0;
}

