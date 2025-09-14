#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main() {
    int matriz[9][8];
    int somaImpares = 0;
    int contadorImpares = 0;
    float mediaImpares;
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
                somaImpares += matriz[i][j];
                contadorImpares++;
            }
        }
    }

    if (contadorImpares > 0) {
        mediaImpares = (float)somaImpares / contadorImpares;
        printf("\nMédia dos valores ímpares: %.2f\n", mediaImpares);
    } else {
        printf("\nNão há valores ímpares na matriz.\n");
    }

    return 0;
}
