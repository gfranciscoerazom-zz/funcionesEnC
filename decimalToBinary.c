/* 1.- Dividir el valor entre 2 y almacenar el modulo en un array.
2.- Dividir el valor otra vez entre 2 y almacenar el modulo
3.- Repetir hasta que nuestro número ya no se puedadividir */
#include <stdio.h>
#include <stdlib.h>

int numberInBinary[12], i;

void convertion(int n) {
    for(i = 0; n > 0; i++) {
        numberInBinary[i] = n % 2;
        n /= 2;
    }
}

int main() {
    int n;
    system("clear");
    printf("Ingrese un valor decimal: ");
    scanf("%d", &n);

    convertion(n);
    
    printf("La conversión de %d a binario es:\n", n);

    for(i = i - 1; i >= 0; i--) {
        printf("%d", numberInBinary[i]);
    }

    return 0;
}