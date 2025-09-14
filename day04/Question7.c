//Write a program to swap two numbers without using a third variable.

#include <stdio.h>
int main() {
    int a, b;
    printf("Enter the First Number: ");
    scanf("%d", &a);
    printf("Enter the second Number: ");
    scanf("%d", &b);
    a = a + b; 
    b = a - b; 
    a = a - b; 
    printf("After Swapping:\n");
    printf("First Number: %d\n", a);
    printf("Second Number: %d\n", b);
    return 0;
}