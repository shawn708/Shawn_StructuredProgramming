#include <stdio.h>

int main() {
    int arr[3] = {2, 5, 7};
    int rev[3];
    printf("Original array elements:\n");
    for(int i = 0; i < 3; i++) {
        printf("%d ", arr[i]);
    }           
    printf("Reversed array elements:\n");
    for(int i = 0; i < 3; i++) {
        rev[i] = arr[2 - i];
        printf("%d ", rev[i]);
    }
    return 0;

}