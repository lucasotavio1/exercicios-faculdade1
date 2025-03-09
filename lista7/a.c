#include <stdio.h>
#include <stdlib.h>

void f1(int seg, int *hr, int *min, int *s) {
    *hr=seg/3600;
    *min=(seg%3600)/60;
    *s=(seg%3600)%60;
}

int main() {
    int seg, hr, min,s;
   
    printf("Informe um valor em segundos: ");
    scanf("%d", &seg);
    f1(seg, &hr, &min, &s);
   
    printf("valor em minutos: %d\n", hr);
    printf("valor em horas: %d\n", min);
    printf("segundos: %d\n", s);
   
    return 0;
}
