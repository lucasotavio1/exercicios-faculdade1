#include <stdio.h>


int main() {
    int i, valor, menor, maior;
    float soma;

    printf("Informe um valor: ");
    scanf("%d", &valor);

    soma = maior = menor = valor;
    i = 1;

    while (i < 10) {
        printf("Informe um valor: ");
        scanf("%d", &valor);
        
        if (menor > valor) {
            menor = valor;
        }
        if (maior < valor) {
            maior = valor;
        }
        soma += valor;
        i++;
    }

    printf("Menor valor: %d\n", menor);
    printf("Maior valor: %d\n", maior);
    printf("Méida dos valores: %f\n", soma / 10);
    
    return 0;
}