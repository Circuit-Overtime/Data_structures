#include <stdio.h>

// Function to implement Binary Search
int binarySearch(int arr[], int left, int right, int x) {
    // Repeat until the left index is less than or equal to the right index
    while (left <= right) {
        // Calculate the middle index
        int mid = left + (right - left) / 2;

        // If the element is present at the middle itself
        if (arr[mid] == x) {
            // Return the index of the element
            return mid;
        }

        // If the element is smaller than the middle element, then it can only be present in the left subarray
        if (arr[mid] < x) {
            // Update the left index
            left = mid + 1;
        } else {
            // Update the right index
            right = mid - 1;
        }
    }

    // If the element is not present in the array, return -1
    return -1;
}

// Main function
int main() {
    int arr[] = {2, 3, 4, 10, 40}; // Initialize a sorted array
    int n = sizeof(arr) / sizeof(arr[0]); // Calculate the size of the array
    int x = 10; // Element to search for

    // Call the Binary Search function to search for the element
    int result = binarySearch(arr, 0, n - 1, x);

    if (result == -1) {
        printf("Element is not present in array\n");
    } else {
        printf("Element is present at index %d\n", result);
    }

    return 0;
}
