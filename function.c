#include <stdio.h>

int powerOfIntegeres(int base, int n) {
    int p = 1;
    for(int i = 1; i <= n; i++)
        p *= base;
    return p;
}

int main() {
    for(int i = 0; i < 10; i++)
        printf("n = %d\nresultado de la potencia = %d\n", i, powerOfIntegeres(2, i));
    return 0;
}