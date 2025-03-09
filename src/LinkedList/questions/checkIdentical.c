#include "../linkedlist.h"
#include <stdio.h>
#include <stdbool.h>


bool checkIdentical(node *first, node *second){
    if(first == NULL && second != NULL){
        return false;
    }
    else if(first != NULL && second == NULL){
        return false;
    }
    else if(first == NULL && second == NULL){
        return false;
    }
    while(first != NULL && second != NULL){
        if(first->data != second->data){
            return false;
        }
        first  = first->next;
        second = second->next;
    }
    if(first != NULL){
        return false;
    }
    if(second != NULL){
        return false;
    }

    return true;
}


int main(){

    node *first = createLinkedList(10);
    insertAtEnd(first, 20);
    insertAtEnd(first, 30);
    insertAtEnd(first, 40);
    insertAtEnd(first, 50);
    node *second = createLinkedList(10);
    insertAtEnd(second, 20);
    insertAtEnd(second, 30);
    insertAtEnd(second, 40);
    insertAtEnd(second, 50);

    printf("First Linked list\n");
    printLinkedList(first);
    printf("Second Linked list\n");
    printLinkedList(second);

    bool result = checkIdentical(first, second);
    printf((result)? "Given list are identical\n" : "Given list is not identical\n");



    node *thrid = createLinkedList(10);
    insertAtEnd(thrid, 20);
    insertAtEnd(thrid, 30);
    insertAtEnd(thrid, 40);
    insertAtEnd(thrid, 50);
    node *fourth = createLinkedList(10);
    insertAtEnd(fourth, 20);
    insertAtEnd(fourth, 30);
    insertAtEnd(fourth, 90);
    insertAtEnd(fourth, 50);

    printf("First Linked list\n");
    printLinkedList(thrid);
    printf("Second Linked list\n");
    printLinkedList(fourth);

    bool result2 = checkIdentical(thrid, fourth);
    printf((result2)? "Given list are identical\n" : "Given list is not identical\n");


}
