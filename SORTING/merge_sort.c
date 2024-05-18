#include <stdio.h>
#include <stdlib.h>

// Function to merge two subarrays of arr[]
// First subarray is arr[left..mid]
// Second subarray is arr[mid+1..right]
void merge(int arr[], int left, int mid, int right) {
    int i, j, k;
    int n1 = mid - left + 1; // Size of the first subarray
    int n2 = right - mid;    // Size of the second subarray

    // Create temporary arrays to hold the data
    int L[n1], R[n2];

    // Copy data to temporary arrays L[] and R[]
    for (i = 0; i < n1; i++)
        L[i] = arr[left + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[mid + 1 + j];

    // Initial index of first subarray
    i = 0;
    // Initial index of second subarray
    j = 0;
    // Initial index of merged subarray
    k = left;

    // Merge the temporary arrays back into arr[left..right]
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i]; // If L[i] is smaller, put it in the next position of the merged array
            i++;
        } else {
            arr[k] = R[j]; // If R[j] is smaller, put it in the next position of the merged array
            j++;
        }
        k++;
    }

    // Copy the remaining elements of L[], if any
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    // Copy the remaining elements of R[], if any
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

// Function to sort an array using merge sort
void mergeSort(int arr[], int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2; // Find the middle point to divide the array into two halves

        // Call mergeSort for the first half
        mergeSort(arr, left, mid);
        // Call mergeSort for the second half
        mergeSort(arr, mid + 1, right);

        // Merge the two halves sorted in step 2 and 3
        merge(arr, left, mid, right);
    }
}

// Function to print an array
void printArray(int arr[], int size) {
    // Loop through each element of the array
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]); // Print the current element followed by a space
    printf("\n"); // Print a newline character after printing all elements
}

// Main function to test the merge sort implementation
int main() {
    // Define and initialize an array to be sorted
    int arr[] = {12, 11, 13, 5, 6, 7};
    int arr_size = sizeof(arr) / sizeof(arr[0]); // Calculate the size of the array

    // Print the given array before sorting
    printf("Given array is \n");
    printArray(arr, arr_size);

    // Call mergeSort to sort the array
    mergeSort(arr, 0, arr_size - 1);

    // Print the sorted array
    printf("\nSorted array is \n");
    printArray(arr, arr_size);

    return 0; // Return 0 to indicate successful execution
}
