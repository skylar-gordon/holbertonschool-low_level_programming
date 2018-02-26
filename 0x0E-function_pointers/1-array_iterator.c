#include "function_pointers.h"

/**
 * array_iterator - does the function to integers in array
 * @array: The array
 * @size: Size of the array
 * @action: Function to do.
 * Return: Void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long int i;

	for (i = 0; i < size; i++)
		action(array[i]);
}
