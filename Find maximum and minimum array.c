#include <stdio.h>

int main() {
    int arr[3] = {45, 25, 21};
    int max = 0;
    for(int i = 0; i < 3; i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
    }

    printf("Maximum array element: %d \n", max);
    int min = arr[3];
    for(int i = 0; i < 3; i++){
        if(arr[i] < min) {
            min = arr[i];
             
        }
    }
    printf("Minimum array element: %d\n", min);
    
    return 0;
}