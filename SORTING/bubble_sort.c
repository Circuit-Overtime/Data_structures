#include <stdio.h>

// Function to implement Bubble Sort
void bubbleSort(int arr[], int n) {
    int i, j, temp;
    // Outer loop for iterating over all elements
    for (i = 0; i < n-1; i++) {
        // Inner loop for comparing elements
        for (j = 0; j < n-i-1; j++) {
            // Swap if the element found is greater than the next element
            if (arr[j] > arr[j+1]) {
                temp = arr[j];    // Store current element in temporary variable
                arr[j] = arr[j+1]; // Replace current element with next element
                arr[j+1] = temp;   // Replace next element with current element (swap)
            }
        }
    }
}

// Function to print an array
void printArray(int arr[], int size) {
    int i;
    for (i=0; i < size; i++) {
        printf("%d ", arr[i]); // Print each element of the array
    }
    printf("\n"); // Move to the next line after printing all elements
}

// Main function
int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90}; // Initialize an array
    int n = sizeof(arr)/sizeof(arr[0]); // Calculate the size of the array
    printf("Original array: \n");
    printArray(arr, n); // Print the original array

    // Call the Bubble Sort function to sort the array
    bubbleSort(arr, n);

    printf("Sorted array: \n");
    printArray(arr, n); // Print the sorted array
    return 0;
}
