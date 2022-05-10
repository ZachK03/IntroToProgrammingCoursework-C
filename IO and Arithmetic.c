#include <stdio.h>

int main() {
    int num1;
    int num2;

    printf("Enter your first number: ");
    scanf("%d", &num1);

    printf("Enter your second number: ");
    scanf("%d", &num2);

    //Subtract the two, multiply, square each.

    printf("Difference is: %d\n",num1 - num2);
    printf("Product is: %d\n",num1 * num2);
    printf("Square of %d is %d\n",num1, num1*num1);
    printf("Square of %d is %d\n",num2, num2*num2);

    return 0;
}