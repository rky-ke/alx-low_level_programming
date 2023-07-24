#include <stdio.h>
#include "search_algos.h"

/**
 * linear_search - searches for a value in an array of
 * integers using the Linear search algorithm
 *
 * @array: input array
 * @size: size of the array
 * @value: value to search in
 * Return: Always EXIT_SUCCESS
 */

int linear_search(int *array, size_t size, int value) 
{
	int i;

	if (array == NULL) {
		printf("Array is NULL.\n");
		return -1;
	}
	for (i = 0; i < (int)size; i++) {
		printf("Comparing array[%u] = %d with value %d\n", i, array[i], value);
		if (array[i] == value) {
			return i;
		}
	}
	printf("Value not found in the array.\n");
	return -1;
}
