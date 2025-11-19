#include <stdio.h>
#include <string.h>

int main(){
    char text[100];
    printf("String Manipulation\n");
    printf("Enter a word: ");

    scanf("%s", text);
    printf("You entered: %s\n", text);
    printf("Length of the string: %lu\n", strlen(text));
    printf("Reversed string: ");
    for(int i = strlen(text) - 1; i >= 0; i--){
        printf("%c", str1[i]);
    }
    printf("\n");




    return 0;
}