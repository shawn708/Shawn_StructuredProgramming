#include <stdio.h>
 void sortArray(int arr[], int size) {
    for(int i = 0; i < size - 1; i++) {
        for(int j = 0; j < size - i - 1; j++) {
            if(arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void printArray(int arr[], int size) {
    for(int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
}
int main() {
    int arr[5] = {2, 7, 4, 5, 9};
    int sort = 0;

    sortArray(arr, 5);
    printArray(arr, 5);
    

    return 0;
}