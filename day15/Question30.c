//Write a program to reverse a given number.

#include <stdio.h>
int main() {
    int num, reversed = 0;
    printf("Enter the number to be reversed:");
    scanf("%d", &num);
    while (num!=0)
    {
        int temp = num%10;
        reversed = reversed*10 + temp;
        num = num/10;
    }
    printf("Reversed number: %d\n", reversed);
    return 0;
}