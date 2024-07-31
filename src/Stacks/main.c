#include "stack.h"
#include <stdio.h>
#include <stdbool.h>


int main(){
    
    printf("creating the stack\n\n");
    stack *st = createStack();

    printf("pushing elements in stack\n\n");
    push(st,10);
    push(st,20);
    push(st,30);
    push(st,40);

    printf("printing the elements in stack after pushing elements\n");
    printStack(st);

    int value = pop(st);
    printf("after poping once\n");
    printStack(st);

    printf("isEmpty %d\n", isEmpty(st));
    printf("size of the stack is %d\n", size(st));

    printf("top element is %d\n", peek(st));
}
