#include <stdio.h>

// Function to swap two elements
void swap(int* a, int* b) {
    int temp = *a;  // Store the value of the first element in a temporary variable
    *a = *b;        // Assign the value of the second element to the first element
    *b = temp;      // Assign the value of the temporary variable to the second element
}

// Function to partition the array and return the pivot index
int partition(int arr[], int low, int high) {
    int pivot = arr[high];  // Choose the pivot element (usually the last element)
    int i = (low - 1);      // Initialize the index of the smaller element to one less than the lowest index

    // Traverse through all elements in the array
    for (int j = low; j <= high - 1; j++) {
        // If the current element is smaller than or equal to the pivot
        if (arr[j] <= pivot) {
            // Increment the index of the smaller element
            i++;
            // Swap the current element with the element at index i
            swap(&arr[i], &arr[j]);
        }
    }
    // Swap the pivot element with the element at index (i + 1)
    swap(&arr[i + 1], &arr[high]);
    // Return the pivot index
    return (i + 1);
}

// Function to implement Quick Sort
void quickSort(int arr[], int low, int high) {
    if (low < high) {
        // Partition the array and get the pivot index
        int pi = partition(arr, low, high);
        // Sort the left sub-array recursively
        quickSort(arr, low, pi - 1);
        // Sort the right sub-array recursively
        quickSort(arr, pi + 1, high);
    }
}

// Function to print an array
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);  // Print each element of the array
    }
    printf("\n");  // Move to the next line after printing all elements
}

// Main function
int main() {
    int arr[] = {10, 7, 8, 9, 1, 5};  // Initialize an array
    int n = sizeof(arr) / sizeof(arr[0]);  // Calculate the size of the array
    printf("Original array: \n");
    printArray(arr, n);  // Print the original array

    // Call the Quick Sort function to sort the array
    quickSort(arr, 0, n - 1);

    printf("Sorted array: \n");
    printArray(arr, n);  // Print the sorted array
    return 0;
}
