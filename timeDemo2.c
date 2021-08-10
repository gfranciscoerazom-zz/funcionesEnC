#include <stdio.h>
#include <time.h>

int main() {
    time_t begin, end;
    long i;

    begin = time(NULL);
    for (i = 0; i < 1500000000; i++);
    end = time(NULL);

    printf("El tiempo que duró nuestro for es: %f", difftime(end, begin));
}
