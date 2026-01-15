#include <stdio.h>

#define SIZE 5

int main() {
    int buffer[SIZE] = {0};
    int total_entered = 0;  
    int input;

    printf("Circular Data Logger (Enter -1 to stop)\n");

    while (1) {
        printf("Enter sensor value: ");
        scanf("%d", &input);

        if (input == -1) break;

        buffer[total_entered % SIZE] = input;
        total_entered++;

        printf("Current Buffer: ");
        int count = (total_entered < SIZE) ? total_entered : SIZE;
        for (int i = 0; i < count; i++) {
            printf("%d ", buffer[i]);
        }
        printf("\n");
    }

    return 0;
}