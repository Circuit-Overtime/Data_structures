/*
This CODE does three things:

1. It creates a new node with the given data.
2. It pushes an element onto the stack.
3. It pops an element from the stack.

*/

#include <stdio.h>    // Include standard input/output header file
#include <stdlib.h>   // Include standard library header file for dynamic memory allocation

// Define the structure for the stack node
typedef struct Node {     // Define a structure named Node
    int data;             // Data field to hold the value of the element
    struct Node* next;    // Pointer to the next Node in the stack
} Node;                   // Alias the struct to Node

// Function to create a new node
Node* createNode(int data) {   // Define a function to create a new node
    Node* newNode = (Node*)malloc(sizeof(Node));   // Allocate memory for a new node
    newNode->data = data;                          // Assign data to the new node
    newNode->next = NULL;                          // Initialize next pointer to NULL
    return newNode;                                // Return the newly created node
}

// Function to push an element onto the stack
void push(Node** top, int data) {   // Define a function to push an element onto the stack
    Node* newNode = createNode(data);   // Create a new node with the given data
    newNode->next = *top;               // Set the next pointer of the new node to the current top of the stack
    *top = newNode;                     // Update the top pointer to point to the new node
}

// Function to pop an element from the stack
int pop(Node** top) {   // Define a function to pop an element from the stack
    if (*top == NULL) {   // Check if the stack is empty
        printf("Stack underflow!\n");   // Print an error message
        return -1;                       // Return -1 indicating underflow
    }
    int data = (*top)->data;   // Store the data of the top node
    Node* temp = *top;          // Store the address of the top node in a temporary variable
    *top = (*top)->next;        // Update the top pointer to point to the next node
    free(temp);                 // Free the memory occupied by the top node
    return data;                // Return the popped element
}

// Function to check if the stack is empty
int isEmpty(Node* top) {   // Define a function to check if the stack is empty
    return top == NULL;    // Return 1 if top is NULL (indicating an empty stack), otherwise return 0
}

// Function to get the top element of the stack without popping it
int peek(Node* top) {   // Define a function to get the top element of the stack without popping it
    if (top == NULL) {   // Check if the stack is empty
        printf("Stack is empty!\n");   // Print an error message
        return -1;                     // Return -1 indicating empty stack
    }
    return top->data;   // Return the data of the top node
}

// Function to display the elements of the stack
void display(Node* top) {   // Define a function to display the elements of the stack
    if (top == NULL) {   // Check if the stack is empty
        printf("Stack is empty!\n");   // Print an error message
        return;                        // Return from the function
    }
    Node* current = top;   // Create a pointer to traverse the stack starting from the top
    printf("Stack: ");     // Print a message indicating the start of the stack display
    while (current != NULL) {   // Loop until the end of the stack is reached
        printf("%d ", current->data);   // Print the data of the current node
        current = current->next;         // Move to the next node
    }
    printf("\n");   // Print a newline character to end the line
}

// Main function for testing the stack
int main() {   // Define the main function
    Node* top = NULL;   // Initialize an empty stack with top pointing to NULL

    // Push some elements onto the stack
    push(&top, 10);
    push(&top, 20);
    push(&top, 30);

    // Display the stack
    display(top);

    // Peek the top element
    printf("Top element: %d\n", peek(top));

    // Pop elements from the stack
    printf("Popped element: %d\n", pop(&top));
    printf("Popped element: %d\n", pop(&top));

    // Display the stack after popping
    display(top);

    return 0;   // Return 0 to indicate successful execution of the program
}
