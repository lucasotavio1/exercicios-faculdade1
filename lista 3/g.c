#include <stdio.h>
#include <stdlib.h>
#include <time.h>


#define TAMANHO_VETOR 30


int main() {
    int vetor[TAMANHO_VETOR];
    int i, j, temp;

    srand(time(NULL));
    
    for (i = 0; i < TAMANHO_VETOR; i++) {
        vetor[i] = rand() % 60 + 1;
    }

    printf("Vetor gerado:\n");

    for (i = 0; i < TAMANHO_VETOR; i++) {
        printf("%d ", vetor[i]);
    }

    for (i = 0; i < TAMANHO_VETOR - 1; i++) {
        for (j = 0; j < TAMANHO_VETOR - i - 1; j++) {
            if (vetor[j] > vetor[j + 1]) {
                temp = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = temp;
            }
        }
    }

    printf("\n\nVetor ordenado de forma crescente:\n");

    for (i = 0; i < TAMANHO_VETOR; i++) {
        printf("%d ", vetor[i]);
    }

    printf("\n");

    return 0;
}
