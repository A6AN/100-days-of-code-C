//Perform diagonal traversal of a matrix.
#include <stdio.h>
int main() {
    int rows, cols;
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    int matrix[100][100];

    printf("Enter elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("Diagonal traversal of the matrix is:\n");
    for (int d = 0; d < rows + cols - 1; d++) {
        for (int i = 0; i <= d; i++) {
            int j = d - i;
            if (i < rows && j < cols) {
                printf("%d ", matrix[i][j]);
            }
        }
    }
    printf("\n");

    return 0;
}