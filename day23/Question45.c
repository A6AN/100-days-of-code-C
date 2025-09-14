//Write a program to find the sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms.

#include <stdio.h>
int main() {
    int n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    float sum = 0.0;
    int numerator = 2;
    int denominator = 3;
    for (int i = 0; i < n; i++) {
        sum += (float)numerator / denominator;
        numerator += 2;
        denominator += 4;
    }
    printf("The sum of the series up to %d terms is: %.2f\n", n, sum);
    return 0;
}