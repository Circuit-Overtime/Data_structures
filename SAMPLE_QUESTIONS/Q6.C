//PROGRAM TO CALCULATE THE LENGTH OF A STRING USING GETS()

#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 100 // Maximum length of the string

int main() {
    char str[MAX_LENGTH]; // Define a character array to store the string
    int length; // Variable to store the length of the string

    printf("Enter a string: "); // Prompt the user to enter a string
    gets(str); // Read the string entered by the user

    // Calculate the length of the string using the strlen() function from string.h
    length = strlen(str);

    printf("Length of the string is: %d\n", length); // Display the length of the string

    return 0; // Return 0 to indicate successful execution
}
