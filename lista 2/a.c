#include <stdio.h>


int main() {
    int i;
    
    for (int i = 12; i <= 450; i++) {
        if (i % 3 == 0) {
            printf("%d\n", i);
        }
    }
    
    return 0;
}