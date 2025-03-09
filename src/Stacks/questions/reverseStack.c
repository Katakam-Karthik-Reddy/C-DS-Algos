#include "../stack.h"
#include <stdio.h>


int main(){

    stack *st = createStack();
    push(st, 10);
    push(st, 20);
    push(st, 30);
    push(st, 40);


    stack *newStack = createStack();

    while(!isEmpty(st)){
        printf("size of st : %d\n", size(st));
        printf("size of newstack : %d\n", size(newStack));
        int value = pop(st);
        push(st, value);
    }

    printStack(newStack);
}
