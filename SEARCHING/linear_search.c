#include <stdio.h>

// Function to implement Linear Search
int linearSearch(int arr[], int n, int x) {
    // Iterate through each element of the array
    for (int i = 0; i < n; i++) {
        // If the current element is equal to the search element
        if (arr[i] == x) {
            // Return the index of the element
            return i;
        }
    }
    // If the element is not found, return -1
    return -1;
}

// Main function
int main() {
    int arr[] = {2, 3, 4, 10, 40}; // Initialize an array
    int n = sizeof(arr) / sizeof(arr[0]); // Calculate the size of the array
    int x = 10; // Element to search for

    // Call the Linear Search function to search for the element
    int result = linearSearch(arr, n, x);

    if (result == -1) {
        printf("Element is not present in array\n");
    } else {
        printf("Element is present at index %d\n", result);
    }

    return 0;
}
