#include <stdio.h>


int main() {
    int tempo, velocidade;

    printf("Informe o tempo da viagem em horas: ");
    scanf("%d", &tempo);

    printf("Informe a velocidade média (km/h): ");
    scanf("%d", &velocidade);

    int distancia = tempo * velocidade;
    int consumo = distancia / 15;

    printf("Consumo: %dL\n", consumo);

    return 0;
}
