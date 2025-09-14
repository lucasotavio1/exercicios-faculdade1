#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main() {
    int matriz[12][12];
    int somaDiagonalPrincipal = 0;
    int somaDiagonalSecundaria = 0;
    int i, j;

    srand(time(NULL));

    for (i = 0; i < 12; i++) {
        for (j = 0; j < 12; j++) {
            matriz[i][j] = rand() % 50 + 1;
        }
    }

    printf("Matriz 12x12:\n");
    for (i = 0; i < 12; i++) {
        for (j = 0; j < 12; j++) {
            printf("%4d", matriz[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < 12; i++) {
        somaDiagonalPrincipal += matriz[i][i];
        somaDiagonalSecundaria += matriz[i][11 - i];
    }

    printf("\nSoma da diagonal principal: %d\n", somaDiagonalPrincipal);
    printf("Soma da diagonal secundária: %d\n", somaDiagonalSecundaria);

    return 0;
}
