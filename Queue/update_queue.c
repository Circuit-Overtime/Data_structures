#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100 //this is the max size of the queue

// Define a structure for the queue
typedef struct {
    int items[MAX_SIZE]; // Array to store elements of the queue
    int front; // Index of the front element
    int rear; // Index of the rear element
} Queue;


void updateElement(Queue* queue, int position, int newValue) {
    // Check if the queue is empty
    if (isEmpty(queue)) {
        printf("Queue is empty. Cannot update element.\n");
        return;
    }
    // Check if the position is valid
    if (position < 0 || position > (queue->rear - queue->front + 1)) {
        printf("Invalid position. Cannot update element.\n");
        return;
    }
    // Calculate the index of the element to be updated
    int index = (queue->front + position) % MAX_SIZE;
    // Update the element at the calculated index
    queue->items[index] = newValue;
    printf("Element at position %d updated to %d.\n", position, newValue);
}

//EXPLANATION TO EACH LINE SPECIFICALLY
/*
void updateElement(Queue* queue, int position, int newValue): 

This line defines the function updateElement, which takes three parameters:
Queue* queue: A pointer to the queue structure where the update will occur.
int position: The position of the element in the queue that you want to update.
int newValue: The new value that you want to assign to the element at the specified position.

*/

/*
if (isEmpty(queue)) {: 
Checks if the queue is empty using the isEmpty() function. 
If the queue is empty, it prints a message indicating that the queue is empty and cannot be updated, 
and then returns from the function.
*/

/*
if (position < 0 || position > (queue->rear - queue->front + 1)) {: 
Checks if the position provided is valid. If the position is less than 0 or greater than the number of 
elements in the queue, it prints a message indicating that the position is invalid and cannot update the element, 
and then returns from the function.

*/

/*
int index = (queue->front + position) % MAX_SIZE; : 
Calculates the index of the element to be updated using the formula (front + position) % MAX_SIZE. 
This formula ensures that the index is within the bounds of the array, 
considering the circular nature of the queue.
*/

/*
queue->items[index] = newValue;: 
Assigns the new value (newValue) to the element at the calculated index in the items array of the queue.
*/
