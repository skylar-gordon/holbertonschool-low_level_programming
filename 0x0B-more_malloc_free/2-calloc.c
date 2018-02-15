#include "holberton.h"
#include <stdlib.h>

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int j;
	unsigned int **array;

	if (nmemb == 0 || size == 0)
		return (NULL);
	array = (unsigned int **)malloc(nmemb * sizeof(int*) * size);
	if (array == NULL)
	{
		free(array);
		return (NULL);
	}
	for (j = 0; j <= size * nmemb; j++)
		array[j] = 0;
	return (array);
}
