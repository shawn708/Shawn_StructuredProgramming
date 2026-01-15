#include <stdio.h>

int main() {
    int arr[3] = {2, 5, 8,};
    int sum = 0;

    for(int i = 0; i < 3; i++) {
        sum += arr[i];
    }

    printf("Sum of elements stores: %d\n", sum);
    return 0;
}