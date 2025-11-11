//Find the second largest element in an array.
#include <stdio.h>

int main() {
    int arr[100], n, i, largest, secondLargest;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    largest = secondLargest = -1;

    for (i = 0; i < n; i++) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }

    if (secondLargest != -1) {
        printf("The second largest element is: %d\n", secondLargest);
    } else {
        printf("No second largest element found.\n");
    }

    return 0;
}