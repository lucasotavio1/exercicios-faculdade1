#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool funPrimo(int a) {
    int b;

    if (a <= 1) {
        return false;
    }
    for (b = 2; b * b <= a; b++) {
        if (a % b == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int c;

    printf("Digite um número natural > 0: ");
    scanf("%d", &c);

    if (c > 0) {
        if (funPrimo(c)) {
            printf("O número %d é primo.", c);
        } else {
            printf("O número %d não é primo.", c);
        }
    }

    return 0;
}
