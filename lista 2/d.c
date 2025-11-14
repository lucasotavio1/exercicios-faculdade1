#include <stdio.h>


int main() {
    int i = 20;
    int j, k;

    while (i <= 600) {
        k = 0;
        
        for (j = 2; j < i; j++) {
            if (i % j == 0) {
                d = 1;
            }
        }

        if (k == 0) {
            printf("%d ", i);
        }

        i++;
    }
    
    return 0;
}