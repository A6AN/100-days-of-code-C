//Write a program to input three numbers and find the largest among them using if–else.

#include <stdio.h>
int main() {
    int a, b, c;
    printf("Enter the First Number: ");
    scanf("%d", &a);
    printf("Enter the Second Number: ");
    scanf("%d", &b);
    printf("Enter the Third Number: ");
    scanf("%d", &c);
    if (a >= b && a >= c) {
        printf("%d is the largest number.\n", a);
    } else if (b >= a && b >= c) {
        printf("%d is the largest number.\n", b);
    } else {
        printf("%d is the largest number.\n", c);
    }
    return 0;
}