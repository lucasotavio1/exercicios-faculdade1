#include <stdio.h>
#include <stdlib.h>
#include <time.h>


#define TAMANHO_VETOR 30


int main() {
    int vetor[TAMANHO_VETOR];
    int i, qtd_pares = 0, qtd_impares = 0;

    srand(time(NULL));

    for (i = 0; i < TAMANHO_VETOR; i++) {
        vetor[i] = rand() % 50 + 1;
    }

    printf("Vetor gerado:\n");

    for (i = 0; i < TAMANHO_VETOR; i++) {
        printf("%d ", vetor[i]);
        if (vetor[i] % 2 == 0)
            qtd_pares++;
        else
            qtd_impares++;
    }

    printf("\n\nQuantidade de números pares: %d\n", qtd_pares);
    printf("Números pares: ");

    for (i = 0; i < TAMANHO_VETOR; i++) {
        if (vetor[i] % 2 == 0)
            printf("%d ", vetor[i]);
    }

    printf("\n\nQuantidade de números ímpares: %d\n", qtd_impares);
    printf("Números ímpares: ");
    
    for (i = 0; i < TAMANHO_VETOR; i++) {
        if (vetor[i] % 2 != 0)
            printf("%d ", vetor[i]);
    }

    printf("\n");
    
    return 0;
}
