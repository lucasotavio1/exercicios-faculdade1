#include <stdio.h>


#define TAMANHO_VETOR 15


int main() {
    int vetor[TAMANHO_VETOR];
    int i, maior, menor;
    float soma = 0.0, media;

    printf("Informe 15 valores inteiros entre 0 e 20:\n");

    for (i = 0; i < TAMANHO_VETOR; i++) {
        do {
            printf("Valor %d: ", i + 1);
            scanf("%d", &vetor[i]);
            if (vetor[i] < 0 || vetor[i] > 20) {
                printf("Valor não aceito. ");
            }
        } while (vetor[i] < 0 || vetor[i] > 20);
        soma += vetor[i];
    }

    maior = menor = vetor[0];

    for (i = 1; i < TAMANHO_VETOR; i++) {
        if (vetor[i] > maior)
            maior = vetor[i];
        if (vetor[i] < menor)
            menor = vetor[i];
    }

    media = soma / TAMANHO_VETOR;

    printf("\nMaior valor: %d\n", maior);
    printf("Posição(ões) do maior valor:");

    for (i = 0; i < TAMANHO_VETOR; i++) {
        if (vetor[i] == maior)
            printf(" %d", i);
    }

    printf("\nMenor valor: %d\n", menor);
    printf("Posição(ões) do menor valor:");
    
    for (i = 0; i < TAMANHO_VETOR; i++) {
        if (vetor[i] == menor)
            printf(" %d", i);
    }

    printf("\nMédia: %.2f\n", media);

    return 0;
}
