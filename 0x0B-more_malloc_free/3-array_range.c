#include "holberton.h"
#include <stdlib.h>

/**
* array_range - creates an array of integers from min to max, inclusive of both
* @min: Lowest number to include.
* @max: Highest number to include.
* Return: Pointer to array, NULL upon failure or error.
*/

int *array_range(int min, int max)
{
	int range; /* Calculated below*/
	int i; /* Used to iterate through allocated space to assign values */
	int *arr; /* malloc below */

	if (min > max)
		return (NULL); /* negative range is not iterable */
	range = max - min + 1; /* ensuring enough space being allocated */
	arr = (int *)malloc(range * sizeof(int)); /* allocates space for range */
	if (arr == NULL) /* malloc has failed */
	{
		free(arr); /* free unused array */
		return (NULL); /* ill-fitting array is not usable */
	}
	for (i = 0; i < range; i++)
		arr[i] = min + i;
	return (arr); /* returning pointer to new array */
}
