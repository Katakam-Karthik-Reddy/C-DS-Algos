#include <stdio.h>
#include "linearSearch.h"
#include "binarySearch.h"
#include "TwoPointerSearch.h"

int main(int argc, char *argv[]){
    printf("This is searching algorithms\n");

    int list[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int n = sizeof(list)/sizeof(int);

    printf("elements in the list : ");
    for(int index=0; index<n; index++){
        printf("%d ", list[index]);
    }
    printf("\n");
    int search_element_linear_search = linearSearch(list, n, 5);
    int search_element = 5;
    printf("index of the element %d is %d using linear search\n", search_element, search_element_linear_search);

    int search_element_binary_search = binarySearch(list, n, 5);
    printf("index of the element %d is %d using binary search\n", search_element, search_element_binary_search);
    
    int *list_of_two_index = findSumOfTwo(list, n, 3);
    if(list_of_two_index==NULL){
        printf("count not find the two element adding up to target sum provided");
    }
    else{
        printf("indies of the elements add up to %d are %d and %d\n", search_element, list_of_two_index[0], list_of_two_index[1]);
    }
    
    return 0;
}