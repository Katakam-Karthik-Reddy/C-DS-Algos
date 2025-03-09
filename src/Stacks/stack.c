#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include "stack.h"

stack* createStack(){
    stack *st = (stack *)malloc(sizeof(stack *));
    st->index = -1;
    return st;
}

bool isEmpty(stack *st){
    return st->index == -1;
}

bool isFull(stack *st){
    return (int)MAX_LEN <= st->index+1;
}

bool push(stack *st, int value){
    if(!isFull(st)){
        st->index++;
        st->arr[st->index] = value;
        return true;
    }
    printf("Stack is full, when trying to push element : %d\n", value);
    return false;
}

int pop(stack *st){
    if(isEmpty(st)){
        printf("stack is empty");
        return -1;
    }
    int tempvalue = st->arr[st->index];
    st->index--;
    return tempvalue;
}
int size(stack *st){
    return st->index + 1;
}

int peek(stack *st){
    return st->arr[st->index];
}

void printStack(stack *st){
    printf("buttom -> ");
    for(int i=0; i<=st->index; i++){
        printf("%d ->",st->arr[i]);
    }
    printf("Top\n");
}
