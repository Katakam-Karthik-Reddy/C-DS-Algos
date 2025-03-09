#ifndef ARRAYLIST_H
#define ARRAYLIST_H

#ifdef __cplusplus
extern "C" {
#endif

typedef struct{
    int *arr;
    int index;
    int size;
} arrayList;

arrayList *ArrayList();
int getAtIndex(arrayList *list, int index);
int pushToList(arrayList *list, int element);
arrayList *insertAtIndex(arrayList *list, int element, int index);
void printList(arrayList *list);

#ifdef __cplusplus
}
#endif

#endif
