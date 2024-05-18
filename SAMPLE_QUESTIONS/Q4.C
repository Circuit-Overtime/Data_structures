//PROGRAM TO TRANSPOSE A GIVEN MATRIX

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

// Function to transpose a given matrix
void transposeMatrix(int matrix[][3], int transposed[][3], int rows, int cols) {
    // Iterate over each element of the matrix
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            // Assign the transposed element
            transposed[j][i] = matrix[i][j];
        }
    }
}

// Main function to test the transpose of a matrix
int main() {
    // Define and initialize a 2D array (matrix)
    int matrix[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    
    // Define the number of rows and columns in the matrix
    int rows = 3;
    int cols = 3;

    // Define a matrix to store the transposed matrix
    int transposed[3][3];

    // Print the original matrix
    printf("Original matrix:\n");
    printMatrix(matrix, rows, cols);

    // Transpose the matrix
    transposeMatrix(matrix, transposed, rows, cols);

    // Print the transposed matrix
    printf("Transposed matrix:\n");
    printMatrix(transposed, rows, cols);

    return 0; // Return 0 to indicate successful execution
}
