#include "Queue.h"
#include <stdio.h>

int main(int argc, char *argv[]){
   
    printf("creating queue\n");
    queue *myqueue = Queue();
    printQueue(myqueue);
    printf("\n");
    
    printf("pushing element into queue\n");
    enqueue(myqueue,10);
    enqueue(myqueue,12);
    enqueue(myqueue,15);
    printQueue(myqueue);

    printf("dequeue element from the queue\n");
    dequeue(myqueue);
    printQueue(myqueue);

    printf("peeking the queue\n");
    printf("front peek %d\n", peek(myqueue));

    printf("peeking at the rear of the queue\n");
    printf("rear peek %d\n", rear(myqueue));

    printf("checking if the queue is full\n");
    printf("isFull %d\n", isFull(myqueue));

    printf("chekcing if the queue is empty\n");
    printf("isEmpty : %d\n", isEmpty(myqueue));

    printf("size of the queue is %d\n", size(myqueue));

    
    return 0;
}