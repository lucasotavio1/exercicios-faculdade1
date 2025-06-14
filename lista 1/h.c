#include <stdio.h>
#include <math.h>


int main() {
    float velocidadeInicial, angulo;

    printf("Informe a velocidade inicial (m/s): ");
    scanf("%f", &velocidadeInicial);

    printf("Informe o ângulo (graus): ");
    scanf("%f", &angulo);

    float anguloRadianos = angulo * M_PI / 180;

    float alcance = (velocidadeInicial * velocidadeInicial * sin(2 * anguloRadianos)) / 9.81;

    printf("O projétil atingirá o chão em %.2f metros\n", alcance);

    return 0;
}
