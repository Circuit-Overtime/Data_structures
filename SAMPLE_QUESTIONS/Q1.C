//WRITE A PROGRAM TO SEARCH AN ELEMENT IN AN ARRAY USING LINEAR SEARCH

#include <stdio.h>

// Function to perform linear search
int linearSearch(int arr[], int size, int target) {
    // Iterate over each element in the array
    for (int i = 0; i < size; i++) {
        // Check if the current element is equal to the target
        if (arr[i] == target) {
            return i; // Return the index if the target is found
        }
    }
    return -1; // Return -1 if the target is not found in the array
}

// Function to print an array
void printArray(int arr[], int size) {
    // Loop through each element of the array
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]); // Print the current element followed by a space
    }
    printf("\n"); // Print a newline character after printing all elements
}

// Main function to test the linear search implementation
int main() {
    // Define and initialize an array
    int arr[] = {10, 23, 45, 70, 11, 15};
    int size = sizeof(arr) / sizeof(arr[0]); // Calculate the size of the array

    // Define the target element to search for
    int target = 70;

    // Print the given array
    printf("Given array is: ");
    printArray(arr, size);

    // Perform linear search to find the target element
    int result = linearSearch(arr, size, target);

    // Check the result of the search
    if (result != -1) {
        printf("Element %d found at index %d\n", target, result); // Print if the element is found
    } else {
        printf("Element %d not found in the array\n", target); // Print if the element is not found
    }

    return 0; // Return 0 to indicate successful execution
}
