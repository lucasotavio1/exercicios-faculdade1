#include <stdio.h>


int main() {
    int numero;

    printf("Informe um número inteiro: ");
    scanf("%d", &numero);

    printf("O antecessor do número é: %d\n", numero - 1);
    printf("O sucessor do número é: %d\n", numero + 1);

    return 0;
}
