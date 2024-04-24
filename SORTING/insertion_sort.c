#include <stdio.h>

// Function to implement Insertion Sort
void insertionSort(int arr[], int n) {
    int i, key, j;
    // Loop through all elements starting from the second element
    for (i = 1; i < n; i++) {
        key = arr[i]; // Current element to be inserted at its correct position
        j = i - 1;

        /* Move elements of arr[0..i-1], that are greater than key, to one position ahead of their current position */
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j]; // Shift element to the right
            j = j - 1;
        }
        arr[j + 1] = key; // Insert key into the correct position
    }
}

// Function to print an array
void printArray(int arr[], int n) {
    int i;
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]); // Print each element of the array
    }
    printf("\n"); // Move to the next line after printing all elements
}

// Main function
int main() {
    int arr[] = {12, 11, 13, 5, 6}; // Initialize an array
    int n = sizeof(arr) / sizeof(arr[0]); // Calculate the size of the array
    printf("Original array: \n");
    printArray(arr, n); // Print the original array

    // Call the Insertion Sort function to sort the array
    insertionSort(arr, n);

    printf("Sorted array: \n");
    printArray(arr, n); // Print the sorted array
    return 0;
}
