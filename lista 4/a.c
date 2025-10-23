#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main() {
    int matriz_m[10][10], matriz_n[10][10], matriz_s[10][10];
    int i, j;

    srand(time(NULL));

    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            matriz_m[i][j] = rand() % 50 + 1;
        }
    }

    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            matriz_n[i][j] = rand() % 50 + 1;
        }
    }

    printf("Matriz M:\n");
    
    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            printf("%4d", matriz_m[i][j]);
        }
        printf("\n");
    }

    printf("\nMatriz N:\n");

    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            printf("%4d", matriz_n[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            matriz_s[i][j] = matriz_m[i][j] + matriz_n[i][j];
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