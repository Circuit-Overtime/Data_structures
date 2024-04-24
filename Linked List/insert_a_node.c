/*SAME CODE LIKE create_linked_list.c*/
//New Part
// Function to insert a node with given value to  the linked list
#include <stdio.h>
#include <stdlib.h>

// Define the structure of each node in the linked list
struct Node {
    int data;
    struct Node* next;
};

void insertAtPosition(struct Node** head, int data, int position) {
    // Create a new node
    struct Node* newNode = createNode(data);

    // If position is 0, insert at the beginning
    if (position == 0) {
        newNode->next = *head;
        *head = newNode;
        return;
    }

    // Traverse to the node at position - 1
    struct Node* current = *head;
    for (int i = 0; i < position - 1 && current != NULL; i++) {
        current = current->next;
    }

    // If position is out of bounds, return
    if (current == NULL) {
        printf("Invalid position\n");
        return;
    }

    // Insert the new node after current node
    newNode->next = current->next;
    current->next = newNode;
}

/*
This function insertAtPosition inserts a new node with the given data at a specified position in the linked list.

It takes a double pointer to the head of the linked list (struct Node** head), the data (int data) of the new node, 
and the position (int position) where the new node should be inserted.

If the position is 0, it inserts the new node at the beginning of the linked list by updating the head pointer.
Otherwise, it traverses the linked list to find the node at position - 1.

If the position is out of bounds (i.e., if the current node becomes NULL before reaching the desired position),
 it prints an error message and returns without inserting the new node.
 
Otherwise, it inserts the new node after the current node by updating the next pointers appropriately.
*/