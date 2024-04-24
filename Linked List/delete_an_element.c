/*SAME CODE LIKE create_linked_list.c*/
//New Part
// Function to delete a node with given data from the linked list
#include <stdio.h>
#include <stdlib.h>

// Define the structure of each node in the linked list
struct Node {
    int data;
    struct Node* next;
};

void deleteNode(struct Node** head, int key) {
    // Store head node
    struct Node* temp = *head, *prev = NULL;

    // If head node itself holds the key to be deleted
    if (temp != NULL && temp->data == key) {
        *head = temp->next; // Changed head
        free(temp);         // Free old head
        return;
    }

    // Search for the key to be deleted, keep track of the previous node
    while (temp != NULL && temp->data != key) {
        prev = temp;
        temp = temp->next;
    }

    // If key was not present in the linked list
    if (temp == NULL)
        return;

    // Unlink the node from linked list
    prev->next = temp->next;

    // Free the memory allocated to the node
    free(temp);
}

/*This function deleteNode deletes a node with the given data from the linked list.

It takes a double pointer to the head of the linked list (struct Node** head) and the data (int key) of the node to be 
deleted.

It traverses the linked list to find the node with the given data.

If the node to be deleted is the head node, it changes the head to the next node and frees the memory of the old head.

If the node to be deleted is not the head node, it keeps track of the previous node (prev) and unlinks the node to be 
deleted by updating the next pointer of the previous node to skip the node to be deleted.

Finally, it frees the memory allocated to the node to be deleted.

*/