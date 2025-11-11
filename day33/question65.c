//Search in a sorted array using binary search.
#include <stdio.h>

int main() {
    int arr[100], n, i, searchElement;
    int low, high, mid;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter %d elements (sorted):\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to search for: ");
    scanf("%d", &searchElement);

    low = 0;
    high = n - 1;
    while (low <= high) {
        mid = (low + high) / 2;
        if (arr[mid] == searchElement) {
            printf("Element %d found at index %d\n", searchElement, mid);
            return 0;
        } else if (arr[mid] < searchElement) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    printf("Element %d not found in the array\n", searchElement);
    return 0;
}