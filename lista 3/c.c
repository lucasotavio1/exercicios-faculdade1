#include <stdio.h>


int main() {
    int i, termo_anterior = 0, termo_atual = 1, proximo;

    printf("Série de Fibonacci (30 termos):\n");
    printf("%d %d ", termo_anterior, termo_atual);

    for (i = 3; i <= 30; i++) {
        proximo = termo_anterior + termo_atual;
        printf("%d ", proximo);
        
        termo_anterior = termo_atual;
        termo_atual = proximo;
    }

    printf("\n");
    
    return 0;
}
