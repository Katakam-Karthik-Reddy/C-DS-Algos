#include <stdlib.h>
#include <stdio.h>
#include <limits.h>
#include "ArrayList.h"

arrayList *ArrayList(){
    arrayList * list;
    list->arr = (int *)malloc(sizeof(int) * 10);
    list->index = 0;
    list->size = 10;
    return list;
}

int getAtIndex(arrayList *list, int index){
    return list->arr[index];
}

int pushToList(arrayList *list, int element){
    list->arr[list->index] = element;
    return list->arr[list->index++];
}

arrayList *insertAtIndex(arrayList *list, int element, int index){
    // doubling the size of the array if array's size is less the index
    int *oldArr = list->arr;
    while(index>list->size){
        free(list->arr);
        list->arr = (int *)malloc(sizeof(int) * list->size * 2);
        list->size = list->size * 2;
        for(int i=0; i<list->size; i++){
            list->arr[i] = INT_MIN;
        }
    }
    for(int ind=0; ind<list->index; ind++){
        list->arr[ind] = oldArr[ind];
    }
    list->arr[index] = element;
    if(index>list->index){
        list->index = index+1;
    }
    return list;
}

void printList(arrayList *list){
    printf("elements in array\n");
    for(int index=0; index<list->index; index++){
        printf("index : %d element : %d\n", index, list->arr[index]);
    }
    printf("\n");
}
