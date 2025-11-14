#include <stdio.h>


int main() {
    int duracao;

    printf("Informe a duração do evento em segundos: ");
    scanf("%d", &duracao);

    int horas = duracao / 3600;
    int minutos = (duracao % 3600) / 60;
    int segundos = duracao % 60;

    printf("Horas: %02d:%02d:%02d\n", horas, minutos, segundos);

    return 0;
}
