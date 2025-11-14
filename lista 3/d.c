#include <stdio.h>
#include <stdlib.h>
#include <time.h>


#define TAMANHO_VETOR 30


int main() {
    int vetor[TAMANHO_VETOR];
    int i, numero, encontrado = 0;

    srand(time(NULL));

    for (i = 0; i < TAMANHO_VETOR; i++) {
        vetor[i] = rand() % 100 + 1;
    }

    printf("Vetor gerado:\n");

    for (i = 0; i < TAMANHO_VETOR; i++) {
        printf("%d ", vetor[i]);
    }

    printf("\nInforme um número: ");
    scanf("%d", &numero);

    printf("Posição(ões) do número %d no vetor: ", numero);

    for (i = 0; i < TAMANHO_VETOR; i++) {
        if (vetor[i] == numero) {
            printf("%d ", i);
            encontrado = 1;
        }
    }

    if (!encontrado) {
        printf("Valor não encontrado.\n");

    }

    printf("\n");
    
    return 0;
}
