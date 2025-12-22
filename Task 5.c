#include <stdio.h>

void swapNumbers(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int a = 10, b = 20;

    printf("Before swap: a = %d, b = %d\n", a, b);

    swapNumbers(&a, &b);

    printf("After swap: a = %d, b = %d\n", a, b);

    return 0;
}