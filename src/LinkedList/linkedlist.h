
#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include <stdbool.h>


#ifdef __cplusplus
extern "C" {
#endif

typedef struct node {
    int data;
    struct node *next;
} node;

/**
@brief creating the node.
*/
node* createLinkedList(int value);

/**
@brief printing the linked list.
*/
void printLinkedList(node *head);


/**
@brief to insert the value at the beginning of the linked list.
*/
node* insertAtBeginning(node *head, int value);

/**
@brief to insert value at the end of the linked list
*/
void insertAtEnd(node *head, int value);

/**
@brief to insert the value at the given index.
 */
node* insertAtIndex(node *head, int index, int value);

/**
@brief to delete the node at the beginning of the linked list.
*/
node* deleteFirstNode(node *head);

/**
@brief to delete the node at the end of the linked list.
 */
node* deleteLastNode(node *head);


/**
@brief to delete the node with given value.
 */
void deleteByValue(node *head, int value);

/**
@brief to delete the node at the given index.
 */
node* deleteAtIndex(node *head, int index);


/**
@brief searching the node with given index.
 */
int searchByIndex(node *head, int index);


/**
@brief searching the node with given value.
 */
int searchByValue(node *head, int value);


/**
@brief to count the number of node's in the linked list.
 */
int countlist(node *head);


/**
@brief to find the middle element of the linked list.
 */
int middleElement(node *head);


/**
@brief to check the loop present in the linked list.
 */
bool checkLoop(node *head);


/**
@brief to update the value of the node with the given index.
 */
void updateLinkedList(node *head, int index, int value);

/**
@brief to reverse given linked list
*/
node* reverseLinkedList(node *head);



#ifdef __cplusplus
}
#endif

#endif
