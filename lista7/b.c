#include <stdio.h>
#include <stdlib.h>

void f1(int AA, int BB, int *a, int *b){
    *a=BB;
    *b=AA;
}

int main(){
    int AA, BB, a, b;
    printf("Informe um valor A: ");
    scanf("%d", &AA);
    printf("Informe um valor B: ");
    scanf("%d", &BB);
    f1(AA, BB, &a, &b);
    printf("Valores A e B trocado: %d %d", a, b);
    return 0;
}
