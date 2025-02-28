#include <stdio.h>
#include <stdlib.h>

void duracao(int hI, int hImin, int hT, int hTmin, int *hr, int *min){
    int inicio = hI*60 + hImin;
    int termino = hT*60 + hTmin;
    if(termino<inicio){
        termino+=24*60;
    }
    int duracao = termino - inicio;
    *hr=duracao/60;
    *min=duracao%60;
}

int main() {
    int hI, hImin, hT, hTmin, hr, min;
    printf("Informe a hora e os minutos que começam o jogo: ");
    scanf("%d %d", &hI, &hImin);
    printf("Informe a hora e os minutos que terminam o jogo: ");
    scanf("%d %d", &hT, &hTmin);
    duracao(hI, hImin, hT, hTmin, &hr, &min);
    printf("Duração do jogo em horas e minutos: %d:%d\n", hr, min);
return 0;
}
