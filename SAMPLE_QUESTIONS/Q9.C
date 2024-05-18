//PROGRAM TO FIND GCD OF TWO NUMBERS 

#include <stdio.h>

// Function to calculate the GCD of two numbers using the Euclidean algorithm
int gcd(int a, int b) {
    // Base case: if b is 0, then GCD is a
    if (b == 0) {
        return a;
    }
    // Recursive case: call gcd recursively with b and the remainder of a divided by b
    return gcd(b, a % b);
}

int main() {
    int num1, num2;

    // Input the two numbers from the user
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);

    // Calculate the GCD using the gcd function
    int result = gcd(num1, num2);

    // Display the GCD
    printf("GCD of %d and %d is %d\n", num1, num2, result);

    return 0; // Return 0 to indicate successful execution
}
