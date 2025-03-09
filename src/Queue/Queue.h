#ifndef QUEUE_H
#define QUEUE_H

#ifdef __cplusplus
extern "C" {
#endif

#include <stdint.h>
#include <stdbool.h>

#define MAX_SIZE 10

typedef struct queue{
    int arr[MAX_SIZE];
    int capacity;
    int front;
    int rear;
} queue;

queue *Queue();
bool enqueue(queue *queue, int value);
int dequeue(queue *queue);
int peek(queue *queue);
int rear(queue *queue);
bool isFull(queue *queue);
bool isEmpty(queue *queue);
int size(queue *queue);
void printQueue(queue *queue);
void printStruct(queue *queue);

#ifdef __cplusplus
}
#endif

#endif
