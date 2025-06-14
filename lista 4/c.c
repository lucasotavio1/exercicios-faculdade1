#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main() {
    int matriz[8][5];
    int menorValor;
    int i, j;

    srand(time(NULL));

    for (i = 0; i < 8; i++) {
        for (j = 0; j < 5; j++) {
            matriz[i][j] = rand() % 15 + 1;
        }
    }

    printf("Matriz 8x5:\n");
    for (i = 0; i < 8; i++) {
        for (j = 0; j < 5; j++) {
            printf("%4d", matriz[i][j]);
        }
        printf("\n");
    }

    menorValor = matriz[0][0];
    for (i = 0; i < 8; i++) {
        for (j = 0; j < 5; j++) {
            if (matriz[i][j] < menorValor) {
                menorValor = matriz[i][j];
            }
        }
    }

    printf("\nMenor valor encontrado: %d\n", menorValor);
    printf("Posição(ões) do menor valor:\n");

    for (i = 0; i < 8; i++) {
        for (j = 0; j < 5; j++) {
            if (matriz[i][j] == menorValor) {
                printf("Linha %d, Coluna %d\n", i, j);
            }
        }
    }

    return 0;
}
