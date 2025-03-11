#include "binarySearch.h"
#include <stdio.h>

/**
 * @brief searching for an element in a list using binary search
 * @param list list to be searched in
 * @param size size of the list
 * @param element element to be searched
 * @return int returns the index of the element if found, -1 otherwise
 */
int binarySearch(int *list, int size, int element){
    int low = 0;
    int high = size - 1;
    int mid = 0;
    while(low <= high){
        mid = (low + high) / 2;
        if(list[mid] == element){
            return mid;
        }
        else if(list[mid] < element){
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }
    return -1;
}