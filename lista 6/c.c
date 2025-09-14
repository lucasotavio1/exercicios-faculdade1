#include <stdio.h>
#include <stdlib.h>


void calcularDuracao(int horaInicio, int minutoInicio, int horaTermino, int minutoTermino, int *duracaoHoras, int *duracaoMinutos) {
    int minutosInicio = horaInicio * 60 + minutoInicio;
    int minutosTermino = horaTermino * 60 + minutoTermino;

    if (minutosTermino < minutosInicio) {
        minutosTermino += 24 * 60;
    }

    int duracaoTotalMinutos = minutosTermino - minutosInicio;
    *duracaoHoras = duracaoTotalMinutos / 60;
    *duracaoMinutos = duracaoTotalMinutos % 60;
}

int main() {
    int horaInicio, minutoInicio, horaTermino, minutoTermino;
    int duracaoHoras, duracaoMinutos;

    printf("Informe a hora e os minutos que começam o jogo: ");
    scanf("%d %d", &horaInicio, &minutoInicio);

    printf("Informe a hora e os minutos que terminam o jogo: ");
    scanf("%d %d", &horaTermino, &minutoTermino);

    calcularDuracao(horaInicio, minutoInicio, horaTermino, minutoTermino, &duracaoHoras, &duracaoMinutos);
    printf("Duração do jogo em horas e minutos: %d:%d\n", duracaoHoras, duracaoMinutos);

    return 0;
}
