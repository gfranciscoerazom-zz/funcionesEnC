#include <stdio.h>
#include <math.h>

int main() {
    int x;
    printf("Ingrese el valor de x: ");
    scanf("%d", &x);
    printf("El vlor ingresado es: %d\n", x);
    printf("El vlor del seno de x: %f\n", sin(x));
    printf("El vlor del coseno de x: %f\n", cos(x));
    printf("El vlor del tangente de x: %f\n", tan(x));

    return 0;
}