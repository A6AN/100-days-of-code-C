//Write a program to take an integer array arr and an integer k as inputs. The task is to find the first negative integer in each subarray of size k moving from left to right. If no negative exists in a window, print "0" for that window. Print the results separated by spaces as output.

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
    
    printf("First negative elements: ");
    for (int i = 0; i <= n - k; i++) {
        int firstNegative = 0;
        for (int j = i; j < i + k; j++) {
            if (arr[j] < 0) {
                firstNegative = arr[j];
                break;
            }
        }
        if (i < n - k) {
            printf("%d ", firstNegative);
        } else {
            printf("%d\n", firstNegative);
        }
    }
    
    return 0;
}
