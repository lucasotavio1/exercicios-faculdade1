#include <stdio.h>
#include <math.h>


int main() {
    float tamanho_comodo;
    int quantidade_lampadas;

    printf("Digite o tamanho do cômodo em metros: ");
    scanf("%f", &tamanho_omodo);

    quantidade_lampadas = ceil(tamanho_comodo / 4.0);

    printf("Total de %d lâmpadas\n", quantidade_lampadas);

    return 0;
}
