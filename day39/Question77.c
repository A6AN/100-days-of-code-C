//Check if the elements on the diagonal of a matrix are distinct.
#include <stdio.h>
#include <stdbool.h>

int main() {
    int rows, cols;
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    if (rows != cols) {
        printf("Matrix is not square.\n");
        return 0;
    }

    int matrix[100][100];
    bool isDistinct = true;

    printf("Enter elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    for (int i = 0; i < rows; i++) {
        for (int j = i + 1; j < cols; j++) {
            if (i == j && matrix[i][j] == matrix[j][i]) {
                isDistinct = false;
                break;
            }
        }
        if (!isDistinct) {
            break;
        }
    }

    if (isDistinct) {
        printf("The elements on the diagonal are distinct.\n");
    } else {
        printf("The elements on the diagonal are not distinct.\n");
    }

    return 0;
}