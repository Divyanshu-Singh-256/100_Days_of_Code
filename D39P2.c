#include <stdio.h>

int main() {
    int rows, cols;
    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &rows, &cols);
    if (rows != cols) {
        printf("Invalid input. Please enter a square matrix.\n");
        return 0;
    }
    int matrix[rows][cols];
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    int diagonalSum = 0;
    for (int i = 0; i < rows; i++) {
        diagonalSum += matrix[i][i];
    }
    printf("The sum of the main diagonal elements is: %d\n", diagonalSum);
    return 0;
}