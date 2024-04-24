#include <stdio.h>
#include <stdlib.h>

// Structure for a node in the binary tree
struct TreeNode {
    int data;             // Data stored in the node
    struct TreeNode* left; // Pointer to the left child node
    struct TreeNode* right;// Pointer to the right child node
};

// Function to create a new node
struct TreeNode* createNode(int data) {
    // Allocate memory for a new node
    struct TreeNode* newNode = (struct TreeNode*)malloc(sizeof(struct TreeNode));
    
    // Check if memory allocation was successful
    if (newNode == NULL) {
        printf("Memory allocation failed\n");
        exit(1); // Exit the program if memory allocation fails
    }
    
    // Assign data to the new node
    newNode->data = data;
    
    // Initialize left and right child nodes as NULL
    newNode->left = NULL;
    newNode->right = NULL;
    
    // Return a pointer to the newly created node
    return newNode;
}

int main() {
    // Create the root node with data 1
    struct TreeNode* root = createNode(1);
    
    // Create the left and right child nodes of the root node
    root->left = createNode(2);
    root->right = createNode(3);
    
    // Create some child nodes for the left child of the root
    root->left->left = createNode(4);
    root->left->right = createNode(5);
    
    // Print the data of the nodes in the binary tree
    printf("Binary Tree:\n");
    printf("   %d\n", root->data);
    printf("  / \\ \n");
    printf(" %d   %d\n", root->left->data, root->right->data);
    printf("/ \\ \n");
    printf("%d   %d\n", root->left->left->data, root->left->right->data);
    
    // Free the memory allocated for the binary tree nodes
    free(root->left->left);
    free(root->left->right);
    free(root->left);
    free(root->right);
    free(root);
    
    return 0;
}


/*
#include <stdio.h>: This line includes the standard input/output library, which provides functions like printf and scanf.

#include <stdlib.h>: This line includes the standard library, which provides functions like malloc and free.

struct TreeNode: This line defines a structure named TreeNode which represents a node in the binary tree. 
It contains three members: data for storing the value of the node, left for a pointer to the left child node, 
and right for a pointer to the right child node.

createNode(int data): This function creates a new node with the given data value and returns a pointer to it.

main(): This is the main function where the program execution starts.

root: This variable holds a pointer to the root node of the binary tree.

createNode(1): This line creates the root node with data value 1 using the createNode function.

root->left and root->right: These lines create the left and right child nodes of the root node, respectively, 
with data values 2 and 3.

root->left->left and root->left->right: These lines create two child nodes for the left child of the root node, 
with data values 4 and 5, respectively.

Printing the binary tree: This section prints the data of the nodes in the binary tree using printf statements, 
representing the tree structure visually.

Freeing memory: This section frees the memory allocated for the binary tree nodes using the free function to avoid 
memory leaks.

*/