#include <stdio.h>
#include <stdlib.h>


void converter_segundos(int total_segundos, int *horas, int *min, int *segundos_restantes) {
    *hr=seg/3600;
    *min=(seg%3600)/60;
    *s=(seg%3600)%60;
}

int main() {
    int seg, hr, min, s;
   
    printf("Informe um valor em segundos: ");
    scanf("%d", &seg);
    
    converter_segundos(seg, &hr, &min, &s);
   
    printf("valor em minutos: %d\n", hr);
    printf("valor em horas: %d\n", min);
    printf("segundos: %d\n", s);
   
    return 0;
}
