//Write a program to swap the first and last digit of a number.
#include <stdio.h>
#include <math.h>
int main() {
    int n, firstDigit, lastDigit, digits = 0, temp, swap;
    printf("Enter a number: ");
    scanf("%d", &n);
    temp = n;
    lastDigit = n % 10;
    while (temp >= 10) {
        temp /= 10;
        digits++;
    }
    firstDigit = temp;
    digits++;
    swap = lastDigit;
    for (int i = 0; i < digits - 2; i++) {
        swap *= 10;
    }
    swap += n % (int)pow(10, digits - 1);
    swap += firstDigit;
    printf("Number after swapping first and last digit: %d\n", swap);
    return 0;
}