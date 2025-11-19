#include <stdio.h>

let int main(){
    float num1, num2;

    printf("Simple Calculator\n");

    printf("Enter first number: ");
    scanf("%f", &num1);


    printf("Enter secodn number: ");
    scanf("%f", &num2);

    printf("Addition: %.2f\n", num1 + num2);
    printf("Subtraction: %.2f\n", num1 - num2);
    printf("Multiplication: %.2f\n", num1 * num2);
    if (num2 != 0) {
        printf("Division: %.2f\n", num1 / num2);
    } else {
        printf("Division: Error! Division by zero.\n");
    }

    printf("Modulus: %.2f\n", (float)((int)num1 % (int)num2));







    return 0;
}