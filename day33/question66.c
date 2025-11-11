//Insert an element in a sorted array at the appropriate position.
#include <stdio.h>

int main() {
    int arr[100], n, i, element, pos;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter %d elements (sorted):\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to insert: ");
    scanf("%d", &element);

    pos = n - 1;
    while (pos >= 0 && arr[pos] > element) {
        arr[pos + 1] = arr[pos];
        pos--;
    }
    arr[pos + 1] = element;

    printf("Array after insertion:\n");
    for (i = 0; i < n + 1; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}