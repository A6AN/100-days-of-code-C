//Insert an element in an array at a given position.
#include <stdio.h>

int main() {
    int arr[100], n, i, element, position;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to insert: ");
    scanf("%d", &element);

    printf("Enter the position to insert the element (0 to %d): ", n);
    scanf("%d", &position);

    for (i = n; i > position; i--) {
        arr[i] = arr[i - 1];
    }
    arr[position] = element;

    printf("Array after insertion:\n");
    for (i = 0; i < n + 1; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}