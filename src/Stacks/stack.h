#ifndef STACK_H
#define STACK_H
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

#define MAX_LEN 10

typedef struct stack{
    int index;
    int arr[MAX_LEN];
} stack;

stack* createStack();

bool push(stack *st, int value);

int pop(stack *st);

bool isEmpty(stack *st);

bool isFull(stack *st);

int size(stack *st);

int peek(stack *st);

void printStack(stack *st);

#ifdef __cplusplus
}
#endif

#endif
