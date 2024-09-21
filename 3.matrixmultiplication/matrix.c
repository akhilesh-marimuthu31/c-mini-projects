//program for matrix multiplication

#include <stdio.h>

#define MAX 10 // Define a maximum matrix size

// Function to take matrix input from the user
void inputMatrix(int matrix[MAX][MAX], int row, int col) {
    printf("Enter elements of the matrix (%dx%d):\n", row, col);
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < col; ++j) {
            printf("Element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }
}

// Function to display the matrix
void displayMatrix(int matrix[MAX][MAX], int row, int col) {
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < col; ++j) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
}

// Function to multiply two matrices
void multiplyMatrices(int first[MAX][MAX], int second[MAX][MAX], int result[MAX][MAX], int row1, int col1, int row2, int col2) {
    // Initialize the result matrix to 0
    for (int i = 0; i < row1; ++i) {
        for (int j = 0; j < col2; ++j) {
            result[i][j] = 0;
        }
    }

    // Multiply matrices
    for (int i = 0; i < row1; ++i) {
        for (int j = 0; j < col2; ++j) {
            for (int k = 0; k < col1; ++k) {
                result[i][j] += first[i][k] * second[k][j];
            }
        }
    }
}

int main() {
    int firstMatrix[MAX][MAX], secondMatrix[MAX][MAX], resultMatrix[MAX][MAX];
    int row1, col1, row2, col2;

    // Input dimensions for the first matrix
    printf("Enter rows and columns for the first matrix: ");
    scanf("%d%d", &row1, &col1);

    // Input dimensions for the second matrix
    printf("Enter rows and columns for the second matrix: ");
    scanf("%d%d", &row2, &col2);

    // Matrix multiplication is possible only if the number of columns in the first matrix
    // is equal to the number of rows in the second matrix
    if (col1 != row2) {
        printf("Error: Matrix multiplication not possible. Columns of the first matrix must match the rows of the second matrix.\n");
        return -1;
    }

    // Input matrices
    inputMatrix(firstMatrix, row1, col1);
    inputMatrix(secondMatrix, row2, col2);

    // Multiply matrices
    multiplyMatrices(firstMatrix, secondMatrix, resultMatrix, row1, col1, row2, col2);

    // Display the result
    printf("Resultant Matrix:\n");
    displayMatrix(resultMatrix, row1, col2);

    return 0;
}
