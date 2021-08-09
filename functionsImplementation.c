#include <stdio.h>

void demo1();
void demo2(int a, int b);
int demo3(int a, int b);

int main() {
    demo1();
    demo2(100, 100);
    printf("The result is: %d\n", demo3(100, 100));

    return 0;
}

void demo1() {
    int a, b, add;
    a = b = 100;
    add = a + b;
    printf("The result is: %d\n", add);
}

void demo2(int a, int b) {
    int add = a + b;
    printf("The result is: %d\n", add);
}

int demo3(int a, int b) {
    return a + b;
}