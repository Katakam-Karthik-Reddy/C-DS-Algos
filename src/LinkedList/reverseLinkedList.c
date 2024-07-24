#include "linkedlist.h"
#include <stdlib.h>
#include <stdio.h>

node* reverseLinkedList(node *head){
    if(head == NULL){
        return NULL;
    }
    node *temp = head;
    node *next = NULL;
    while(temp != NULL){
        node *tempnext = temp->next;
        temp->next = next;
        next = temp;
        temp = tempnext;
    }
    return next;
}


int main(){
    
    node *head = createLinkedList(10);
    insertAtEnd(head,20);
    insertAtEnd(head,30);
    insertAtEnd(head,40);
    insertAtEnd(head,50);
    insertAtEnd(head,60);
    insertAtEnd(head,70);
    insertAtEnd(head,80);
    insertAtEnd(head,90);
    insertAtEnd(head,100);

    printf("before reversing the given linked list\n");
    printLinkedList(head);
    head = reverseLinkedList(head);
    printf("after reversing the linked list\n");
    printLinkedList(head);
}
