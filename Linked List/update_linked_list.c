
/*SAME CODE LIKE create_linked_list.c*/
//New Part
// Function to update a node with given value in the linked list
#include <stdio.h>
#include <stdlib.h>

// Define the structure of each node in the linked list
struct Node {
    int data;
    struct Node* next;
};



// Function to update a value in the linked list
void updateValue(struct Node* head, int oldValue, int newValue) {
    // Traverse the linked list
    while (head != NULL) {
        // If the current node contains the old value, update it with the new value
        if (head->data == oldValue) {
            head->data = newValue;
            return; // If value updated, no need to continue traversal
        }
        // Move to the next node
        head = head->next;
    }
    // If old value not found in the list
    printf("Value %d not found in the linked list\n", oldValue);
}

/*
This function updateValue updates a value in the linked list from oldValue to newValue.

It takes the head pointer of the linked list (struct Node* head), the old value (int oldValue), and the 
new value (int newValue).

It traverses the linked list node by node.

If it finds a node containing the old value, it updates its data with the new value and returns from the function.

If the old value is not found in the list, it prints an error message.

This function assumes that the old value may appear multiple times in the list.
*/