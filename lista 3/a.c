#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main() {
    srand(time(NULL));

    int numero = rand() % 10;
    
    printf("%d\n", numero);

    return 0;
}