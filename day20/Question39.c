//Write a program to find the product of odd digits of a number.

#include <stdio.h>
int main() {
    int num, product = 1, digit;
    printf("Enter a number: ");
    scanf("%d", &num);
    while (num != 0) {
        digit = num % 10;
        if (digit % 2 != 0) {
            product *= digit;
        }
        num /= 10;
    }
    printf("Product of odd digits is: %d\n", product);
    return 0;
}