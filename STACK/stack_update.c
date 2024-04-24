/*
This code does one thing:
1. Update an element in the stack.
*/

#include <stdio.h>    // Include standard input/output header file
#include <stdlib.h>   // Include standard library header file for dynamic memory allocation

// Define the structure for the stack node
typedef struct Node {     // Define a structure named Node
    int data;             // Data field to hold the value of the element
    struct Node* next;    // Pointer to the next Node in the stack
} Node;                   // Alias the struct to Node


// Function to update an element in the stack
void updateElement(Node* top, int oldData, int newData) {
    Node* current = top; // Initialize a pointer to traverse the stack starting from the top

    // Traverse the stack until the end is reached or until the old data is found
    while (current != NULL) {
        if (current->data == oldData) { // If the old data is found
            current->data = newData;    // Update the data with the new data
            return;                     // Exit the function
        }
        current = current->next; // Move to the next node
    }

    // If the old data is not found in the stack
    printf("Element %d not found in the stack!\n", oldData);
}
