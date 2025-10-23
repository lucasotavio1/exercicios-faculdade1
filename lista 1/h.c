#include <stdio.h>
#include <math.h>


int main() {
    float velocidade_inicial, angulo;

    printf("Informe a velocidade inicial (m/s): ");
    scanf("%f", &velocidade_inicial);

    printf("Informe o ângulo (graus): ");
    scanf("%f", &angulo);

    float angulo_radianos = angulo * M_PI / 180;

    float alcance = (velocidade_inicial * velocidade_inicial * sin(2 * angulo_radianos)) / 9.81;

    printf("O projétil atingirá o chão em %.2f metros\n", alcance);

    return 0;
}
