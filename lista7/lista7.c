#include <stdio.h>
#include <stdlib.h>

void f1(int seg, int *hr, int *min, int *s){
    *hr=seg/3600;
    *min=(seg%3600)/60;
    *s=(seg%3600)%60;
}

int main(){
    int seg, hr, min,s;
    printf("Informe um valor em segundos: ");
    scanf("%d", &seg);
    f1(seg, &hr, &min, &s);
    printf("valor em minutos: %d\n", hr);
    printf("valor em horas: %d\n", min);
    printf("segundos: %d\n", s);
    return 0;
}

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
