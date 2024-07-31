#ifndef STACK_H
#define STACK_H
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

#define MAX_LEN 100

typedef struct stack{
    int index;
    int arr[MAX_LEN];
} stack;

stack* createStack();

bool isEmpty(stack *st);

bool isFull(stack *st);

bool push(stack *st, int value);

int pop(stack *st);

void printStack(stack *st);

int size(stack *st);

int peek(stack *st);


#ifdef __cplusplus
}
#endif

#endif
