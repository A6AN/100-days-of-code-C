//Write a program to swap two numbers using a third variable.

#include <stdio.h>
int main() {
    int a, b, temp;
    printf("Enter the First Number: ");
    scanf("%d", &a);
    printf("Enter the second Number: ");
    scanf("%d", &b);
    temp = a;
    a = b;
    b = temp;
    printf("After Swapping:\n");
    printf("First Number: %d\n", a);
    printf("Second Number: %d\n", b);
    return 0;
}