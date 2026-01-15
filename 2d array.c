#include <stdio.h>

int main() {
    int arr[6][4];
    int i, j;

    for (i = 0; i < 6; i++) {
        for (j = 0; j < 4; j++) {
            arr[i][j] = (i + 1) * (j + 1);
        }
    }

    printf("2D Array Elements:\n");
    for (i = 0; i < 6; i++) {
        for (j = 0; j < 4; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
