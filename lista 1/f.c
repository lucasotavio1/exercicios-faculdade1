#include <stdio.h>
#include <math.h>


int main() {
    float tamanhoComodo;
    int quantidadeLampadas;

    printf("Digite o tamanho do cômodo em metros: ");
    scanf("%f", &tamanhoComodo);

    quantidadeLampadas = ceil(tamanhoComodo / 4.0);

    printf("Total de %d lâmpadas\n", quantidadeLampadas);

    return 0;
}
