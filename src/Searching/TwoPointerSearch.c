#include "TwoPointerSearch.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * @brief function used to find the two index's of two element adds up to given element
 * @param list list to be searched in
 * @param size size of the list
 * @param sum target sum of two element in the list
 * @return {int, int} pointer to list of two element
 */
int* findSumOfTwo(int *list, int size, int sum){
    int start = 0;
    int end = size - 1;

    int *returnlist = (int *)malloc(sizeof(int));
    while(start < end){
        int currentSum = list[start] + list[end];
        if(currentSum == sum){
            returnlist[0] = start;
            returnlist[1] = end;
            return returnlist;
        }
        else if(currentSum < sum){
            start++;
        }
        else{
            end--;
        }
    }
    return returnlist;
    
}