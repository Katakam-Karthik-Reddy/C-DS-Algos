#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "./linkedlist.h"


node* createLinkedList(int value){
    node *head = (node *)malloc(sizeof(node *));

    head->data = value;
    head->next = NULL;

    return head;
}

void printLinkedList(node *head){
    node *temp = head;
    printf("start -> ");
    while(temp != NULL){
        printf("%i -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

node* insertAtBeginning(node *head, int value){
    node *newnode = (node *)malloc(sizeof(node *));
    newnode->data = value;
    newnode->next = head;
    return newnode;
}

void insertAtEnd(node *head, int value){
    node *temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    node *newnode = (node *)malloc(sizeof(node *));
    newnode->data = value;
    newnode->next = NULL;
    temp->next = newnode;
}

node* insertAtIndex(node *head, int index, int value){
    // index starts from 0
    if(index == 0){
        return insertAtBeginning(head,value);
    }

    node *temp = head;
    int currentindex = 0;
    while(currentindex < index-1){
        if(temp == NULL){
            printf("Index out bound");
            return NULL;
        }
        temp = temp->next;
        currentindex++;
    }

    node *newnode = (node *)malloc(sizeof(node *));
    newnode->data = value;
    newnode->next = temp->next;
    temp->next = newnode;
    return head;
}

node* deleteFirstNode(node *head){
    if(head == NULL){
        return NULL;
    }
    node *temp = head->next;
    free(head);
    return temp;
}

node* deleteLastNode(node *head){
    if(head == NULL || head->next == NULL){
        return NULL;
    }
    node *temp = head;
    while(temp->next != NULL && temp->next->next != NULL){
        temp = temp->next;
    }
    free(temp->next);
    temp->next = NULL;
    return head;
}

void deleteByValue(node *head, int value){
    node *temp = head;
    while(temp->next != NULL && temp->next->data != value){
        temp = temp->next;
    }
    if(temp == NULL){
        return ;
    }
    temp->next = temp->next->next;
}

node* deleteAtIndex(node *head, int index){
    if(index == 0){
        return deleteFirstNode(head);
    }
    if(head == NULL){
        return NULL;
    }
    int currentindex = 0;
    node *temp = head;
    while(currentindex < index-1 && temp != NULL){
        currentindex++;
        temp = temp->next;
    }

    if(temp == NULL){
        return NULL;
    }
    if(temp->next == NULL){
        printf("index is out of bound, please enter correct index\n");
        return head;
    }
    node *temp1 = temp->next;
    temp->next = temp->next->next;
    free(temp1);


    return head;
}

int searchByIndex(node *head, int index){
    if(head == NULL){
        return -1;
    }
    node *temp = head;
    int currentindex = 1;
    while(currentindex < index && temp != NULL){
        currentindex++;
        temp = temp->next;
    }
    if(temp == NULL){
        return -1;
    }
    return temp->data;
}

int searchByValue(node *head, int value){
    if(head == NULL){
        return -1;
    }
    node *temp = head;
    int index = 0;
    while(temp != NULL){
        if(temp->data == value){
            return ++index; 
        }
        temp = temp->next;
        index++;
    }
    return -1;
}

int countlist(node *head){
    if(head == NULL){
        return 0;
    }
    node *temp = head;
    int count = 0;
    while(temp != NULL){
        count++;
        temp = temp->next;
    }
    return count;
}

int middleElement(node *head){
    if(head == NULL){
        return -1;
    }
    node *slow = head;
    node *fast = head;
    while(slow != NULL && fast != NULL && fast->next != NULL){
        slow = slow->next;
        fast = fast->next->next;
    }
    if(slow == NULL){
        return -1;
    }
    return slow->data;
}

bool checkLoop(node *head){
    if(head == NULL){
        return false;
    }
    node *slow = head;
    node *fast = head;
    while(slow != NULL && fast != NULL && fast->next != NULL){
        slow = slow->next;
        fast = fast->next->next;
        if(slow == fast){
            return true;
        }
    }
    return false;
}

void updateLinkedList(node *head, int index, int value){
   if(head == NULL){
       return ;
   }
   int currentindex = 0;
   node *temp = head;
   while(temp != NULL && currentindex < index){
       temp = temp->next;
       currentindex++;
   }
   if(temp == NULL){
       return ;
   }
   temp->data = value;
}

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
