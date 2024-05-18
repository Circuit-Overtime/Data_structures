//PROGRAM TO ADD TWO MATRICES


#include <stdio.h>

// Function to print a 2D array (matrix)
void printMatrix(int matrix[][3], int rows, int cols) {
    // Iterate over each row
    for (int i = 0; i < rows; i++) {
        // Iterate over each column in the current row
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]); // Print the current element followed by a space
        }
        printf("\n"); // Print a newline character after printing all elements in the current row
    }
}

// Function to add two matrices
void addMatrices(int matrix1[][3], int matrix2[][3], int result[][3], int rows, int cols) {
    // Iterate over each element of the matrices
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            // Add corresponding elements of matrix1 and matrix2 and store in result
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
}

// Main function to test the addition of two matrices
int main() {
    // Define and initialize two 2D arrays (matrices)
    int matrix1[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    
    int matrix2[3][3] = {
        {9, 8, 7},
        {6, 5, 4},
        {3, 2, 1}
    };

    // Define the number of rows and columns in the matrices
    int rows = 3;
    int cols = 3;

    // Define a matrix to store the result of the addition
    int result[3][3];

    // Print the first matrix
    printf("Matrix 1:\n");
    printMatrix(matrix1, rows, cols);

    // Print the second matrix
    printf("Matrix 2:\n");
    printMatrix(matrix2, rows, cols);

    // Add the two matrices
    addMatrices(matrix1, matrix2, result, rows, cols);

    // Print the resulting matrix
    printf("Resultant Matrix after addition:\n");
    printMatrix(result, rows, cols);

    return 0; // Return 0 to indicate successful execution
}
