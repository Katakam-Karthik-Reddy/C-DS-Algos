#ifndef LINEARSEARCH_H
#define LINEARSEARCH_H

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @brief function to search an element in an array using linear search in array
 * @param arr list to be searched in
 * @param size length of the list
 * @param element element to be searched in the list
 * @return int return the index of the element if found, -1 otherwise
 */
int linearSearch(int *arr, int size, int element);


#ifdef __cplusplus
}
#endif

#endif