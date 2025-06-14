#include <stdio.h>
#include <stdlib.h>


void fun(int aa, int bb, int *a, int *b){
    *a=bb;
    *b=aa;
}

int main() {
    int aa, bb, a, b;
   
    printf("Informe um valor A: ");
    scanf("%d", &aa);
   
    printf("Informe um valor B: ");
    scanf("%d", &bb);
   
    fun(aa, bb, &a, &b);

    printf("Valores A e B trocados: %d %d", a, b);
   
    return 0;
}
