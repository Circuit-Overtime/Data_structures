//FACTORIAL OF A NUMBER USING RECURSION

#include <stdio.h>

// Function to calculate the factorial of a number using recursion
unsigned long long factorial(int n) {
    if (n == 0 || n == 1) {
        return 1; // Base case: factorial of 0 or 1 is 1
    } else {
        return n * factorial(n - 1); // Recursive call to calculate factorial
    }
}

int main() {
    int number;
    unsigned long long fact;

    // Input number from the user
    printf("Enter a positive integer: ");
    scanf("%d", &number);

    // Check if the number is negative
    if (number < 0) {
        printf("Error: Factorial of a negative number is undefined.\n");
        return 1; // Return error code 1
    }

    // Calculate factorial using the factorial function
    fact = factorial(number);

    // Display the factorial
    printf("Factorial of %d = %llu\n", number, fact);

    return 0; // Return 0 to indicate successful execution
}
// Compare this snippet from SAMPLE_QUESTIONS/Q3.C: 