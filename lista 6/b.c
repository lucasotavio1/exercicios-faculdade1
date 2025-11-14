#include <stdio.h>
#include <stdlib.h>


void trocar_valores(int valor_original1, int valor_original2, int saida_trocada1, int saida_trocada){
    *saida_trocada1 = valor_original2
    *saida_trocada2 = valor_original1
}

int main() {
    int valor_a_original, valor_b_original;
    int valor_a_trocado, valor_b_trocado
   
    printf("Informe um valor A: ");
    scanf("%d", &valor_a_original);
   
    printf("Informe um valor B: ");
    scanf("%d", &valor_b_original);
   
    trocar_valores(valor_a_original, valor_b_original, &valor_a_trocado, &valor_b_trocado)

    printf("Valores A e B trocados: %d %d", a, b);
   
    return 0;
}
