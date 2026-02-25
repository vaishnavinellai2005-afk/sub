#include <stdio.h>

int main() {
    float num1, num2, sum;

    // Taking input from user
    printf("Enter first number: ");
    scanf("%f", &num1);

    printf("Enter second number: ");
    scanf("%f", &num2);

    // Adding numbers
    sum = num1 + num2;

    // Display result
    printf("The sum is: %.2f\n", sum);

    return 0;
}
