#include "stack.h"
#include <stdio.h>
#include <stdbool.h>

int main(){
    
    printf("creating the stack\n");
    stack *st = createStack();
    printStack(st);
    printf("\n");

    printf("check if stack is empty\n");
    printf("isempty : %d\n", isEmpty(st));
    printStack(st);
    printf("\n");

    printf("pushing elements in stack\n");
    push(st,10);
    push(st,20);
    printStack(st);
    printf("\n");

    printf("pop element from the stack\n");
    pop(st);
    printStack(st);
    printf("\n");

    printf("check if stack is empty\n");
    printf("isempty : %d\n", isEmpty(st));
    printStack(st);
    printf("\n");

    printf("check if stack is full\n");
    printf("isfull : %d\n",isFull(st));
    printStack(st);
    printf("\n");

    printf("pushing the 10 elements in the stack\n\n");
    for(int i=1; i<=10; i++){
        push(st, i);
    }
    printf("\n");

    printf("check if stack is full after pushing 10 elements\n");
    printf("isfull : %d\n",isFull(st));
    printStack(st);
    printf("\n");

    printf("checking the size of the stack\n");
    printf("size : %d\n", size(st));
    printStack(st);
    printf("\n");

    printf("peeking the stack\n");
    printf("peek : %d\n", peek(st));
    printStack(st);
    printf("\n");

    return 0;
}
