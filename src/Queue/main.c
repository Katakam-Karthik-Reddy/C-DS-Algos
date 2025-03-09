#include "Queue.h"
#include <stdio.h>

int main(int argc, char *argv[]){
   
    printf("creating queue\n");
    queue *myqueue = Queue();
    printf("myqueue : %p", myqueue);
    // printQueue(myqueue);
    // printf("\n");
    // printStruct(myqueue);
    //
    // printf("pushing element into queue\n");
    // enqueue(myqueue,10);
    // enqueue(myqueue,12);
    // printQueue(myqueue);
}
