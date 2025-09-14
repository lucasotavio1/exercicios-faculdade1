#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main() {
    int matrizM[10][10], matrizN[10][10], matrizS[10][10];
    int i, j;

    srand(time(NULL));

    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            matrizM[i][j] = rand() % 50 + 1;
        }
    }

    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            matrizN[i][j] = rand() % 50 + 1;
        }
    }

    printf("Matriz M:\n");
    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            printf("%4d", matrizM[i][j]);
        }
        printf("\n");
    }

    printf("\nMatriz N:\n");
    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            printf("%4d", matrizN[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            matrizS[i][j] = matrizM[i][j] + matrizN[i][j];
        }
    }

    printf("\nMatriz S (soma de M + N):\n");
    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            printf("%4d", matrizS[i][j]);
        }
        printf("\n");
    }

    return 0;
}