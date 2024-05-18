//PROGRAM TO TRAVERSE A 2D ARRAY

#include <stdio.h>

// Function to print a 2D array
void print2DArray(int arr[][3], int rows, int cols) {
    // Iterate over each row
    for (int i = 0; i < rows; i++) {
        // Iterate over each column in the current row
        for (int j = 0; j < cols; j++) {
            printf("%d ", arr[i][j]); // Print the current element followed by a space
        }
        printf("\n"); // Print a newline character after printing all elements in the current row
    }
}

// Main function to test the traversal of a 2D array
int main() {
    // Define and initialize a 2D array
    int arr[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    
    // Define the number of rows and columns in the array
    int rows = 3;
    int cols = 3;

    // Print the 2D array
    printf("The 2D array is:\n");
    print2DArray(arr, rows, cols);

    return 0; // Return 0 to indicate successful execution
}
