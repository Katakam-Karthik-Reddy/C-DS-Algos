#ifndef QUEUE_H
#define QUEUE_H

#ifdef __cplusplus
extern "C" {
#endif

#include <stdint.h>
#include <stdbool.h>

#define MAX_SIZE 10
/**
 * @brief structure of the queue
 */
typedef struct queue{
    int arr[MAX_SIZE];
    int capacity;
    int front;
    int rear;
} queue;

/**
 * @brief Queue function is used to create the queue
 * @return returns pointer to queue just created
 */
queue *Queue();

/**
 * @brief enqueue function is used to add the element to the queue
 * @param queue queue to which element to be added
 * @param value value to be added to the queue
 * @return true or false returns wheather the element is added or not
 */
bool enqueue(queue *queue, int value);

/**
 * @brief function is used to remove the element from the queue
 * @param queue queue from which element to be removed
 * @return int returns element which is removed
 */
int dequeue(queue *queue);

/**
 * @brief function is used to peek the top element in the queue without removeing it
 * @param queue queue from which element to be peeked
 * @return int returns element at the top of the queue 
 */
int peek(queue *queue);

/**
 * @brief function is used to peek the rear element in the queue without removeing it
 * @param queue queue from which element to be peeked
 * @return int returns element at the rear of the queue
 */
int rear(queue *queue);

/**
 * @brief function is used to check whether the queue is full or not
 * @param queue queue to be checked
 * @return true or false returns wheather the queue is full or not
 */
bool isFull(queue *queue);

/**
 * @brief function is used to check wheather the queue is empty or not 
 * @param queue queue to be checked
 * @return true or false returns wheather the queue is empty or not
 */
bool isEmpty(queue *queue);


/**
 * @brief function is used to get the size of the queue
 * @param queue queue to be checked
 * @return int returns the size of the queue
 */
int size(queue *queue);

/**
    * @brief function prints the elements in the queue as the struct format
    * @param queue *queue : pointer to the queue
    * @return void 
*/
void printQueue(queue *queue);

#ifdef __cplusplus
}
#endif

#endif
