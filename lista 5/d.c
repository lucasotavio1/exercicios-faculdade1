#include <stdio.h>
#include <stdlib.h>


int contar_divisores(int a) {
    int contador = 0;
    int b;
    for (b = 1; b <= a; b++) {
        if (a % b == 0) {
            contador++;
        }
    }
    return contador;
}

int main() {
    int c, resultado;

    printf("Digite um número inteiro positivo: ");
    scanf("%d", &c);

    if (c > 0) {
        resultado = contar_divisores(c);
        printf("O número %d tem %d divisores.", c, resultado);
    } else {
        printf("Por favor, digite um número INTEIRO e POSITIVO");
    }

    return 0;
}
