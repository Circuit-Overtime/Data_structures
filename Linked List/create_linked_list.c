#include <stdio.h>
#include <stdlib.h>

// Define the structure of each node in the linked list
struct Node {
    int data;
    struct Node* next;
};

/*
This defines a structure named Node, which represents each node in the linked list. 
It contains two members:
data: an integer to store the data of the node.
next: a pointer to the next node in the linked list.
*/

// Function to create a new node
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (newNode == NULL) {
        printf("Memory allocation failed\n");
        exit(1);
    }
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}
/*
his function createNode creates a new node with the given data.
It allocates memory for a new node using malloc.
It checks if memory allocation is successful.
It initializes the data and next members of the node.
It returns a pointer to the newly created node.

*/

// Function to insert a node at the beginning of the linked list
void insertAtBeginning(struct Node** head, int data) {
    struct Node* newNode = createNode(data);
    newNode->next = *head;
    *head = newNode;
}


/*This function insertAtBeginning inserts a new node at the beginning of the linked list.
It takes a double pointer to the head of the linked list and the data for the new node.
It creates a new node using the createNode function.
It sets the next pointer of the new node to the current head of the linked list.
It updates the head pointer to point to the new node.
*/


// Function to print the linked list
void printLinkedList(struct Node* head) {
    struct Node* current = head;
    while (current != NULL) {
        printf("%d -> ", current->data);
        current = current->next;
    }
    printf("NULL\n");
}

/*
This function printLinkedList prints the elements of the linked list.
It takes a pointer to the head of the linked list.
It iterates through the linked list using a loop until it reaches the end (i.e., current != NULL).
It prints the data of each node followed by an arrow ->.
It prints NULL when it reaches the end of the linked list.
*/
// Function to free memory allocated to the linked list

int main() {
    struct Node* head = NULL;

    // Insert some elements into the linked list
    insertAtBeginning(&head, 5);
    insertAtBeginning(&head, 10);
    insertAtBeginning(&head, 15);
    insertAtBeginning(&head, 20);

    // Print the linked list
    printf("Linked List: ");
    printLinkedList(head);

    // Free memory allocated to the linked list
    freeLinkedList(head);

    return 0;
}
