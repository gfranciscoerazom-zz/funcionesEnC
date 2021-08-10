#include <stdio.h>
#include <time.h>

int main() {
    time_t seconds;
    seconds = time(NULL);
    printf("El número de horas desde EPOCH (1ro de enero de 1970 a las 00:00 es: %ld\n", seconds/3600);

    return 0;
}