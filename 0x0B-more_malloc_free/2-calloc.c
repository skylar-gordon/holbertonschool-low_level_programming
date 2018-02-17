#include "holberton.h"
#include <stdlib.h>

/**
* _calloc - allocates space and fills with value 0.
* @nmemb: number of elements.
* @size: size of each element.
* Return: array upon success, null upon failure.
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int j;
	unsigned int *array;

	if (nmemb <= 0 || size <= 0)
		return (NULL);
	array = (unsigned int *)malloc(nmemb * size * sizeof(int));
	if (array == NULL)
	{
		free(array);
		return (NULL);
	}
	for (j = 0; j <= size * nmemb; j++)
		array[j] = 0;
	return (array);
}
