#include <stdio.h>
int main() {
    int rows, cols;
    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &rows, &cols);
    int matrix[rows][cols];
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("Diagonal traversal of the matrix is:\n");
    for (int d = 0; d < rows + cols - 1; d++) {
        if (d % 2 == 0) {
            // Traverse from bottom to top
            for (int i = (d < rows) ? d : rows - 1; i >= 0 && d - i < cols; i--) {
                printf("%d ", matrix[i][d - i]);
            }
        } else {
            // Traverse from top to bottom
            for (int i = (d < cols) ? 0 : d - cols + 1; i < rows && d - i >= 0; i++) {
                printf("%d ", matrix[i][d - i]);
            }
        }
    }
    printf("\n");
    return 0;
}