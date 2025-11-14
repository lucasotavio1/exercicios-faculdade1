#include <stdio.h>


int main() {
    int num1, num2, num3, num4, num5, num6;

    printf("Digite 6 números: ");
    scanf("%d %d %d %d %d %d", &num1, &num2, &num3, &num4, &num5, &num6);

    int media1 = (num1 + num2 + num3) / 3;
    int media2 = (num4 + num5 + num6) / 3;

    printf("A média dos 3 primeiros é: %d\n", media1);
    printf("A média dos 3 últimos números é: %d\n", media2);
    printf("A soma das médias é: %d\n", media1 + media2);

    return 0;
}
