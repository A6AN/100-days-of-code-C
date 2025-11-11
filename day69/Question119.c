//Write a program to take an integer array as input. Only one element will be repeated. Print the repeated element. Try to find the result in one single iteration.

#include <stdio.h>

int main() {
    int n;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    
    int arr[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    int xorSum = 0;
    for (int i = 0; i < n; i++) {
        xorSum ^= arr[i];
    }
    
    for (int i = 0; i < n - 1; i++) {
        xorSum ^= i;
    }
    
    printf("Repeated element: %d\n", xorSum);
    
    return 0;
}
