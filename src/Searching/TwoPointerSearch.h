#ifndef TWOPOINTERSEARCH_H
#define TWOPOINTERSEARCH_H

#ifdef __cplusplus
exter "C" {
#endif

/**
 * @brief function used to find the two index's of two element adds up to given element
 * @param list list to be searched in
 * @param size size of the list
 * @param sum target sum of two element in the list
 * @return {int, int} pointer to list of two element
 */
int* findSumOfTwo(int *list, int size, int sum);


#ifdef __cplusplus
}
#endif

#endif