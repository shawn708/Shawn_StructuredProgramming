#include <stdio.h>

void print_unique_elements(int arr[4], int size) {
    printf("Unique elements in the array are:\n");
    for(int i = 0; i < 4; i++) {
        int isUnique = 1;
        for(int j = 0; j < 4; j++) {
            if(i != j && arr[i] == arr[j]) {
                isUnique = 0;
                break;
            }
        }
        if(isUnique) {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");
}
int main(){
    int arr[4]={3, 2, 2, 5};
    print_unique_elements(arr, 4);
    return 0;
}