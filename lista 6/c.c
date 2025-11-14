#include <stdio.h>
#include <stdlib.h>


void calcular_duracao(int hora_inicio, int minuto_inicio, int hora_termino, int minuto_termino, int *duracao_horas, int *duracao_minutos) {
    int minutos_inicio = hora_inicio * 60 + minuto_inicio;
    int minutos_termino = hora_termino * 60 + minuto_termino;

    if (minutos_termino < minutos_inicio) {
        minutos_termino += 24 * 60;
    }

    int duracao_total_minutos = minutos_termino - minutos_inicio;
    *duracao_horas = duracao_total_minutos / 60;
    *duracao_minutos = duracao_total_minutos % 60;
}

int main() {
    int hora_inicio, minuto_inicio, hora_termino, minuto_termino;
    int duracao_horas, duracao_minutos;

    printf("Informe a hora e os minutos que começam o jogo: ");
    scanf("%d %d", &hora_inicio, &minuto_inicio);

    printf("Informe a hora e os minutos que terminam o jogo: ");
    scanf("%d %d", &hora_termino, &minuto_termino);

    calcular_duracao(hora_inicio, minuto_inicio, hora_termino, minuto_termino, &duracao_horas, &duracao_minutos);
    printf("Duração do jogo em horas e minutos: %d:%d\n", duracao_horas, duracao_minutos);

    return 0;
}