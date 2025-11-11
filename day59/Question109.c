//Write a program to take an integer array arr and an integer k as inputs. Print the maximum sum of all the subarrays of size k.

#include <stdio.h>

int main() {
    int n, k;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    
    int arr[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Enter k: ");
    scanf("%d", &k);
    
    if (k > n) {
        printf("Invalid k\n");
        return 1;
    }
    
    int maxSum = 0;
    for (int i = 0; i < k; i++) {
        maxSum += arr[i];
    }
    
    int currentSum = maxSum;
    for (int i = k; i < n; i++) {
        currentSum = currentSum - arr[i - k] + arr[i];
        if (currentSum > maxSum) {
            maxSum = currentSum;
        }
    }
    
    printf("Maximum sum: %d\n", maxSum);
    
    return 0;
}
