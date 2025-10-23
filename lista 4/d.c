#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main() {
    int matriz[9][8];
    int soma_impares = 0;
    int contador_impares = 0;
    float media_impares;
    int i, j;

    srand(time(NULL));

    for (i = 0; i < 9; i++) {
        for (j = 0; j < 8; j++) {
            matriz[i][j] = rand() % 30 + 1;
        }
    }

    printf("Matriz 9x8:\n");
    for (i = 0; i < 9; i++) {
        for (j = 0; j < 8; j++) {
            printf("%4d", matriz[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < 9; i++) {
        for (j = 0; j < 8; j++) {
            if (matriz[i][j] % 2 != 0) {
                soma_impares += matriz[i][j];
                contador_impares++;
            }
        }
    }

    if (contador_impares > 0) {
        media_impares = (float) soma_impares / contador_impares;
        printf("\nMédia dos valores ímpares: %.2f\n", media_impares);
    } else {
        printf("\nNão há valores ímpares na matriz.\n");
    }

    return 0;
}
