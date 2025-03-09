#include <stdio.h>
#include <stdlib.h>
#include "../linkedlist.h"

node* mergedSortedArray(node *first, node *second){

    if(first == NULL && second != NULL){
        return second;
    }

    if(first != NULL && second == NULL){
        return first;
    }

    if(first == NULL && second == NULL){
        return NULL;
    }
    node *result = (node *)malloc(sizeof(node *));
    node *temp = result;
    while(first != NULL && second != NULL){
        if(first->data < second->data){
            temp->next = first;
            first = first->next;
        }
        else if(first->data > second->data){
            temp->next = second;
            second = second->next;
        }
        temp = temp->next;
    }
    if(first != NULL){
        temp->next = first;
    }
    else if(second != NULL){
        temp->next = second;
    }
    return result->next;
}

int main(){

    node *first  = createLinkedList(10);
    node *second = createLinkedList(30);
    insertAtEnd(first,25);
    insertAtEnd(first,48);
    insertAtEnd(first,69);
    insertAtEnd(first,80);
    insertAtEnd(second,32);
    insertAtEnd(second,44);
    insertAtEnd(second,66);

    printf("First sorted array is  : ");
    printLinkedList(first);
    printf("Second sorted array is : ");
    printLinkedList(second);

    printf("Merged sorted array is : ");
    node *result = mergedSortedArray(first, second);
    printLinkedList(result);

}
