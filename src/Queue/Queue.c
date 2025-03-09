#include "Queue.h"
#include <stdio.h>


queue *Queue(){
    queue *queue;
    queue->capacity = 10;
    queue->front = 0;
    queue->rear = 0;
    return queue;
}

bool enqueue(queue *queue, int value){
    printf("debug : pushing element : %d\n", value);
    
    if((queue->front) >= queue->capacity){
        printf("queue is full");
        return false;
    }

    queue->front++;
    printf("debug front : %d, rear: %d\n", queue->front, queue->rear);

    if(queue->rear==-1){
        printf("hel\n");
        queue->rear = queue->rear+1;
    }
    printf("debug front : %d, rear: %d\n", queue->front, queue->rear);
    queue->arr[queue->front] = value;
    return true;
}

// int dequeue(queue *queue);
// int peek(queue *queue);
// int rear(queue *queue);
// bool isFull(queue *queue);
// bool isEmpty(queue *queue);
// int size(queue *queue);

void printStruct(queue *queue){
    printf("elements in list : ");
    for(int i=0; i<queue->capacity; i++){
        printf("index : %d, element : %d\n", i, queue->arr[i]);
    }
    printf("\n");
    printf("capacity : %d\n", queue->capacity);
    printf("front pointer : %d\n", queue->front);
    printf("rear pointer : %d\n", queue->rear);
}
void printQueue(queue *queue){
    printf("elements in the queue\n");
    printf("debug printqueue front : %d, rear: %d, capacity: %d\n", queue->front, queue->rear, queue->capacity);

    if(queue->front == queue->rear && queue->front!=-1){
        printf("front : %d, element : %d\n", 1, queue->arr[queue->front]);
    }
    for(int i=queue->rear; i<queue->front; i++){
        printf("front: %d, element : %d\n", i, queue->arr[i]);
    }
}

