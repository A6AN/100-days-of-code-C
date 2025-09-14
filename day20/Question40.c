//Write a program to find the 1’s complement of a binary number and print it.

#include <stdio.h>
int main(){
   long int n, binary[32], temp, digits = 0;
   printf("Enter a binary number: ");
    scanf("%ld", &n);
    temp = n;
    while (temp != 0) {
        digits++;
        temp /= 10;
    }
    temp = n;

    for (int i = 0; i < digits; i++) {
        binary[i] = temp % 10;
        temp /= 10;
    }
    printf("1's complement of %ld is: ", n);
    for (int i = digits - 1; i >= 0; i--) {
        printf("%ld", 1 - binary[i]);
    }
    printf("\n");
    return 0;
}