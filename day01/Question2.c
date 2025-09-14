//Write a program to input two numbers and display their sum, difference, product, and quotient.
#include <stdio.h>
int main() {
    int a, b;
    printf("Enter the First Number: ");
    scanf("%d", &a);
    printf("Enter the second Number: ");
    scanf("%d", &b);
    printf("Sum: %d\n", a + b);
    printf("Difference: %d\n", a - b);
    printf("Product: %d\n", a * b);
    if (b != 0) {
        printf("Quotient: %.2f\n", (float)a / b);
    } else {
        printf("Quotient: Undefined (division by zero)\n");
    }
    return 0;
}