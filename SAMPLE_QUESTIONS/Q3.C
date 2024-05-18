// PROGRAM TO FIND THE MIN AND MAX IN AN INTEGER ARRAY
#include <stdio.h>
#include <limits.h> // For INT_MAX and INT_MIN

// Function to find the minimum and maximum values in an array
void findMinMax(int arr[], int size, int *min, int *max) {
    // Initialize min to the maximum possible integer value
    *min = INT_MAX;
    // Initialize max to the minimum possible integer value
    *max = INT_MIN;

    // Iterate over each element in the array
    for (int i = 0; i < size; i++) {
        // If the current element is less than min, update min
        if (arr[i] < *min) {
            *min = arr[i];
        }
        // If the current element is greater than max, update max
        if (arr[i] > *max) {
            *max = arr[i];
        }
    }
}

// Main function to test finding the minimum and maximum values
int main() {
    // Define and initialize an array
    int arr[] = {10, 23, 45, 70, 11, 15, 3, 85, 42};
    int size = sizeof(arr) / sizeof(arr[0]); // Calculate the size of the array

    // Variables to store the minimum and maximum values
    int min, max;

    // Call the function to find the minimum and maximum values
    findMinMax(arr, size, &min, &max);

    // Print the minimum and maximum values
    printf("Minimum value in the array is: %d\n", min);
    printf("Maximum value in the array is: %d\n", max);

    return 0; // Return 0 to indicate successful execution
}
