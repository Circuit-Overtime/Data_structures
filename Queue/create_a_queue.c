/*
This CODE does three things

1. creates a queue
2. inserts an element in the queue (enque function)
3. removes an element from the queue (deque function)
*/

#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100 //this is the max size of the queue

// Define a structure for the queue
typedef struct {
    int items[MAX_SIZE]; // Array to store elements of the queue
    int front; // Index of the front element
    int rear; // Index of the rear element
} Queue;

// Function to create a new queue and return a pointer to it
Queue* createQueue() {
    // Allocate memory for the queue structure
    Queue* queue = (Queue*)malloc(sizeof(Queue));
    // Initialize front and rear to -1 to indicate an empty queue
    queue->front = -1;
    queue->rear = -1;
    // Return the pointer to the newly created queue
    return queue;
}

// Function to check if the queue is empty
int isEmpty(Queue* queue) {
    // If both front and rear are -1, the queue is empty
    return (queue->front == -1 && queue->rear == -1);
}

// Function to check if the queue is full
int isFull(Queue* queue) {
    // If the next position after the rear is the same as the front,
    // the queue is full (circular array)
    return (queue->rear + 1) % MAX_SIZE == queue->front;
}

// Function to add an element to the rear of the queue
void enqueue(Queue* queue, int value) {
    // Check if the queue is full
    if (isFull(queue)) {
        printf("Queue is full. Cannot enqueue.\n");
        return;
    }
    // If the queue is empty, set both front and rear to 0
    if (isEmpty(queue)) {
        queue->front = 0;
        queue->rear = 0;
    } else {
        // Move the rear pointer to the next position (circular array)
        queue->rear = (queue->rear + 1) % MAX_SIZE;
    }
    // Insert the new element at the rear position
    queue->items[queue->rear] = value;
}

// Function to remove an element from the front of the queue and return it
int dequeue(Queue* queue) {
    int item;
    // Check if the queue is empty
    if (isEmpty(queue)) {
        printf("Queue is empty. Cannot dequeue.\n");
        return -1;
    }
    // Get the item at the front of the queue
    item = queue->items[queue->front];
    // If there is only one element in the queue, reset front and rear
    if (queue->front == queue->rear) {
        queue->front = -1;
        queue->rear = -1;
    } else {
        // Move the front pointer to the next position (circular array)
        queue->front = (queue->front + 1) % MAX_SIZE;
    }
    // Return the dequeued item
    return item;
}

// Main function
int main() {
    // Create a new queue
    Queue* queue = createQueue();

    // Enqueue some elements
    enqueue(queue, 10);
    enqueue(queue, 20);
    enqueue(queue, 30);
    enqueue(queue, 40);

    // Dequeue some elements and print them
    printf("Dequeued item: %d\n", dequeue(queue));
    printf("Dequeued item: %d\n", dequeue(queue));

    // Enqueue more elements
    enqueue(queue, 50);
    enqueue(queue, 60);

    // Dequeue remaining elements and print them
    printf("Dequeued item: %d\n", dequeue(queue));
    printf("Dequeued item: %d\n", dequeue(queue));
    printf("Dequeued item: %d\n", dequeue(queue));

    // Return 0 to indicate successful exe
}