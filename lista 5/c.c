#include <stdio.h>
#include <stdlib.h>


int soma(int a) {
    int soma = 0;

    while (a > 0) {
        soma += a % 10;
        a /= 10;
    }

    return soma;
}

int main() {
    int b, resultado;

    printf("Digite um número natural: ");
    scanf("%d", &b);

    if (b >= 0) {
        resultado = soma(b);
        printf("A soma dos dígitos do número %d é %d", b, resultado);
    } else {
        printf("Digite um número NATURAL");
    }

    return 0;
}
