#include "function_pointers.h"

/**
 * int_index - compares integers through designated function.
 * @array: Array of integers to compare.
 * @size: Size of array.
 * @cmp: Pointer to function used to compare.
 * Return: Function pointer upon success, -1 upon failure.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	for (i = 0; i < size; i++)
		if ((*cmp)(array[i]))
			return (i);
	return (-1);
}
