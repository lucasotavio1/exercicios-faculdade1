#include <stdio.h>
#include <stdlib.h>


float calcular_media(float nota1, float nota2, float nota3, char tipo) {
    
    float media;

    if (tipo == 'A') {
        media = (nota1 + nota2 + nota3) / 3;
    } else if (tipo == 'P') {
        media = (nota1 * 5 + nota2 * 3 + nota3 * 2) / 10;
    } else {
        media = -1;
    }

    return media;
}

int main() {
    float nota1, nota2, nota3, resultado;
    char tipo;

    printf("Digite as 3 notas do aluno e o tipo de média (A-Aritmética ou P-Ponderada): ")
    scanf("%f %f %f %c", &nota1, &nota2, &nota3, &tipo)

    resultado = calcular_media(nota1, nota2, nota3, tipo);

    if (resultado == -1) {
        printf("Tipo de média inválido.\n");
    } else {
        printf("O resultado da média é: %.2f\n", resultado);
    }
    
    return 0;
}