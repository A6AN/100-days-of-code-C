//Write a program to take an integer array arr as input. The task is to find the maximum sum of any contiguous subarray using Kadane's algorithm. Print the maximum sum as output. If all elements are negative, print the largest (least negative) element.

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
    
    int maxSum = arr[0];
    int currentSum = arr[0];
    
    for (int i = 1; i < n; i++) {
        currentSum = (arr[i] > currentSum + arr[i]) ? arr[i] : currentSum + arr[i];
        if (currentSum > maxSum) {
            maxSum = currentSum;
        }
    }
    
    printf("Maximum subarray sum: %d\n", maxSum);
    
    return 0;
}
