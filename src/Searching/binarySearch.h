#ifndef BINARYSEARCH_H
#define BINARYSEARCH_H

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief searching for an element in a list using binary search
 * @param list list to be searched in
 * @param size size of the list
 * @param element element to be searched
 * @return int returns the index of the element if found, -1 otherwise
 */
int binarySearch(int list[], int size, int element);

#ifdef __cplusplus
}
#endif

#endif