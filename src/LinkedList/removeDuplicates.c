#include "linkedlist.h"
#include <stdio.h>

node* findDuplicates(node *head){
    if(head == NULL){
        return NULL;
    }
    node *temp = head;
    while(temp != NULL && temp->next != NULL){
        if(temp->data == temp->next->data){
            temp->next = temp->next->next;
        }
        temp = temp->next;
    }
    return head;
}

int main(){

    node *head = createLinkedList(10);
    insertAtEnd(head,10);
    insertAtEnd(head,20);
    insertAtEnd(head,20);
    insertAtEnd(head,30);
    insertAtEnd(head,40);
    insertAtEnd(head,40);
    insertAtEnd(head,70);
    insertAtEnd(head,70);

    printf("Before removing duplicate\n");
    printLinkedList(head);
    head = findDuplicates(head);
    printf("After removing duplicate\n");
    printLinkedList(head);
}
