#include <stdio.h>
#include <stdlib.h>


int fun(int a) {
    int contDiv = 0;
    int b;
    for (b = 1; b <= a; b++) {
        if (a % b == 0) {
            contDiv++;
        }
    }
    return contDiv;
}

int main() {
    int c, resultado;

    printf("Digite um número inteiro positivo: ");
    scanf("%d", &c);

    if (c > 0) {
        resultado = f1(c);
        printf("O número %d tem %d divisores.", c, resultado);
    } else {
        printf("Por favor, digite um número INTEIRO e POSITIVO");
    }

    return 0;
}
