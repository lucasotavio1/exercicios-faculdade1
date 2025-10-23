#include <stdio.h>


int main() {
    float metros;

    printf("Informe a medida em metros: ");
    scanf("%f", &metros);

    printf("Decímetros: %.2f\n", metros * 10);
    printf("Centímetros: %.2f\n", metros * 100);
    printf("Milímetros: %.2f\n", metros * 1000);

    return 0;
}
