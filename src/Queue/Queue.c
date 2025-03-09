#include "Queue.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * @brief Queue function is used to create the queue
 * @return returns pointer to queue just created
 */
queue* Queue(){
    queue *qu = (queue *)malloc(sizeof(queue));
    qu->capacity = MAX_SIZE;
    qu->front = -1;
    qu->rear = -1;
    return qu;
}

/**
 * @brief enqueue function is used to add the element to the queue
 * @param queue queue to which element to be added
 * @param value value to be added to the queue
 * @return true or false returns wheather the element is added or not
 */
bool enqueue(queue *queue, int value){
    if((queue->front) >= queue->capacity){
        printf("queue is full");
        return false;
    }

    queue->front++;

    if(queue->rear==-1){
        queue->rear = queue->rear+1;
    }
    queue->arr[queue->front] = value;
    return true;
}

/**
 * @brief function is used to remove the element from the queue
 * @param queue queue from which element to be removed
 * @return int returns element which is removed
 */
int dequeue(queue *queue){
    if(queue->rear == -1 && queue->rear > queue->front){
        printf("queue is empty");
        return -1;
    }
    int rearElement = queue->arr[queue->rear];
    queue->arr[queue->rear] = INT_MIN;
    queue->rear++;
    return rearElement;
}

/**
 * @brief function is used to peek the top element in the queue without removeing it
 * @param queue queue from which element to be peeked
 * @return int returns element at the top of the queue 
 */
int peek(queue *queue){
    return queue->arr[queue->front];
}

/**
 * @brief function is used to peek the rear element in the queue without removeing it
 * @param queue queue from which element to be peeked
 * @return int returns element at the rear of the queue
 */
int rear(queue *queue){
    return queue->arr[queue->rear];
}

/**
 * @brief function is used to check whether the queue is full or not
 * @param queue queue to be checked
 * @return true or false returns wheather the queue is full or not
 */
bool isFull(queue *queue){
    if(queue->front == queue->capacity){
        return true;
    }
    return false;
}

/**
 * @brief function is used to check wheather the queue is empty or not 
 * @param queue queue to be checked
 * @return true or false returns wheather the queue is empty or not
 */
bool isEmpty(queue *queue){
    if(queue->front == -1){
        return true;
    }
    return false;
}

/**
 * @brief function is used to get the size of the queue
 * @param queue queue to be checked
 * @return int returns the size of the queue
 */
int size(queue *queue){
    return (queue->front-queue->rear)+1;
}

/**
    * @brief function prints the elements in the queue as the struct format
    * @param queue *queue : pointer to the queue
    * @return void 
*/
void printQueue(queue *queue){
    printf("elements in list : \n");
    for(int i=0; i<queue->capacity; i++){
        printf("index : %d, element : %d\n", i, queue->arr[i]);
    }
    printf("capacity : %d\n", queue->capacity);
    printf("front pointer : %d\n", queue->front);
    printf("rear pointer : %d\n", queue->rear);
}