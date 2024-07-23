#include <stdio.h>
#include <stdbool.h>
#include "linkedlist.h"

int main(){

    node *head = createLinkedList(10);

    printf("############# adding ##############\n");
    insertAtEnd(head, 20);
    insertAtEnd(head, 30);
    insertAtEnd(head, 40);
    insertAtEnd(head, 50);
    insertAtEnd(head, 60);
    printf("after append elements at the end\n");
    printf("\n");

    printf("head -> %p, before inserting at beginning\n", head);
    printLinkedList(head);
    head = insertAtBeginning(head, 100);
    printf("head -> %p, after inserting at beginning\n", head);
    printLinkedList(head);
    printf("\n");

    printf("head -> %p, before inserting at index\n", head);
    printLinkedList(head);
    head = insertAtIndex(head, 2, 400);
    printf("head -> %p, after inserting at index\n", head);
    printLinkedList(head);
    printf("\n");
    printf("\n");

    printf("############# deleting ##############");
    printf("head -> %p, before deleting first node \n", head);
    printLinkedList(head); 
    head = deleteFirstNode(head);
    printf("head -> %p, after deleting first node\n", head);
    printLinkedList(head);
    printf("\n");

    printf("head -> %p, before deleting last node \n", head);
    printLinkedList(head); 
    head = deleteLastNode(head);
    printf("head -> %p, after deleting last node\n", head);
    printLinkedList(head);
    printf("\n");

    printf("head -> %p, before deleting node by value (20)\n", head);
    printLinkedList(head); 
    deleteByValue(head, 20);
    printf("head -> %p, after deleting node by value\n", head);
    printLinkedList(head);
    printf("\n");

    printf("head -> %p, before deleting node by index (2)\n", head);
    printLinkedList(head); 
    head = deleteAtIndex(head, 2);
    printf("head -> %p, after deleting node by index\n", head);
    printLinkedList(head);
    printf("\n");

    printf("############# searching ##############");
    printf("\n\n");

    printf("head -> %p, searching node by index \n", head);
    printLinkedList(head); 
    int value = searchByIndex(head, 3);
    printf("head -> %p, element found at the index : %d, is : %d\n", head, 3, value);
    printf("\n");

    printf("head -> %p, searching node by value (400)\n", head);
    printLinkedList(head); 
    int position = searchByValue(head, 400);
    printf("head -> %p, element found at the position : %d, after searching node by value\n", head, position);
    printf("\n");

    printf("head -> %p, counting the list\n", head);
    printLinkedList(head); 
    int length = countlist(head);
    printf("head -> %p, length of the list is %d\n", head, length);
    insertAtEnd(head, 100);
    printLinkedList(head); 
    length = countlist(head);
    printf("head -> %p, length of the list is %d\n", head, length);
    printf("\n");


    printf("head -> %p, finding the middle element of the list\n", head);
    printLinkedList(head); 
    int middleelement = middleElement(head);
    printf("head -> %p, middle element of the list is %d\n", head, middleelement);
    insertAtEnd(head, 300);
    printLinkedList(head); 
    middleelement = middleElement(head);
    printf("head -> %p, middle element of the list is %d\n", head, middleelement);
    insertAtEnd(head, 200);
    printLinkedList(head); 
    middleelement = middleElement(head);
    printf("head -> %p, middle element of the list is %d\n", head, middleelement);
    printf("\n");


    printf("head -> %p, detecting loop in the list\n", head);
    printLinkedList(head); 
    bool isloop = checkLoop(head);
    (isloop)? printf("head -> %p, list is looped\n", head) : printf("head -> %p, list is not looped\n", head);
    printf("\n");

    printf("head -> %p, detecting loop in the list\n", head);
    node *temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = head;
    isloop = checkLoop(head);
    printf("we have added loop to last to first element\n");
    (isloop)? printf("head -> %p, list is looped\n", head) : printf("head -> %p, list is not looped\n", head);
    temp->next = NULL;
    printf("we have removed loop\n");
    printf("\n");

    printf("before updating the list\n");
    printLinkedList(head);
    int index = 3;
    value = 500;
    updateLinkedList(head, index, value);
    printf("head -> %p, after updating the value at index %d, with value %d\n", head, index, value);
    printLinkedList(head);
    printf("\n\n");


    printf("before reversing the given linked list\n");
    printLinkedList(head);
    head = reverseLinkedList(head);
    printf("after reversing the linked list\n");
    printLinkedList(head);


}
