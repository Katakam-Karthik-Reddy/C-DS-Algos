#include "ArrayList.h"
#include <stdio.h>

int main(){

    int values[] = {15, 51,561,561,516681,823,92,982,98,741,668,32,487932,2,33};
    int cha[] = {'a', 'b', 'c', 'd'};


    printf("%d\n", values[10]);
    printf("%c\n", cha[2]);

    int data[] = {1, 2, 3, 4, 5};

    *data = 10;
    printf("%i\n", *data);

    printf("working with array wrapper\n");
    arrayList *arr = ArrayList();
    printf("length : %d, size : %d\n", arr->index, arr->size);
    pushToList(arr, 10);
    pushToList(arr, 20);

    printf("after element 10, length : %d, size : %d\n", arr->index, arr->size);
    printList(arr);

    printf("pushing 21 elements in the list\n");
    for(int index=0; index<21; index++){
        pushToList(arr, index);
    }
    
    printList(arr);

    insertAtIndex(arr, 100, 25);

    printf("After inserting at index\n");
    printList(arr);
    printf("after element 21 elements into the list, length : %d, size : %d\n", arr->index, arr->size);

}
