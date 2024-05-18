//DISPLAY THE FIBONACCI SERIES UPTO N TERMS


#include <stdio.h>

// Function to generate Fibonacci series up to a specified limit
void fibonacci(int limit) {
    int first = 0, second = 1, next;

    // Print the first two numbers of the Fibonacci series
    printf("Fibonacci Series up to %d:\n", limit);
    printf("%d, %d, ", first, second);

    // Generate the Fibonacci series up to the specified limit
    next = first + second;
    while (next <= limit) {
        printf("%d, ", next); // Print the next Fibonacci number
        first = second; // Update first to the current second number
        second = next; // Update second to the current next number
        next = first + second; // Calculate the next Fibonacci number
    }
    printf("\n");
}

int main() {
    int limit;

    // Input the limit of the Fibonacci series from the user
    printf("Enter the limit for Fibonacci Series: ");
    scanf("%d", &limit);

    // Generate and print the Fibonacci series up to the specified limit
    fibonacci(limit);

    return 0; // Return 0 to indicate successful execution
}
