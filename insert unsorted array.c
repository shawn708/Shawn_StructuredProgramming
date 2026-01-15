#include <stdio.h>

int main(){
int arr[4] = {1, 8, 7, 10};
int position;
int num;
for(int i = 4; i< 4; i++){
    scanf("%d", &arr[i]);
}
printf("Enter position of array: \n");
scanf("%d", &position);

printf("Enter number to insert: \n");
scanf("%d", &num);
for(int i = 4; i >= position; i--){
    arr[i] = arr[i - 1];
}
arr[position] = num;
printf("Array after insertion: \n");
for(int i = 0; i < 5; i++){ 
    printf("%d ", arr[i]);  
}
return 0;



}