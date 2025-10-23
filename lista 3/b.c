#include <stdio.h>


int main() {
    int vetor[20];
    int i, maior, menor, soma = 0;
    float media;

    printf("Digite 20 números inteiros:\n");
    for (i = 0; i < 20; i++) {
        printf("Número %d: ", i + 1);
        scanf("%d", &vetor[i]);
        soma += vetor[i];
    }

    maior = menor = vetor[0];

    for (i = 1; i < 20; i++) {
        if (vetor[i] > maior) {
            maior = vetor[i];
        }
        if (vetor[i] < menor) {
            menor = vetor[i];
        }    
    }

    media = soma / 20.0;

    printf("\nNúmeros digitados:\n");
    
    for (i = 0; i < 20; i++) {
        printf("%d ", vetor[i]);
    }

    printf("\nMaior número: %d\n", maior);
    printf("Menor número: %d\n", menor);
    printf("Média: %.2f\n", media);
    
    return 0;
}
