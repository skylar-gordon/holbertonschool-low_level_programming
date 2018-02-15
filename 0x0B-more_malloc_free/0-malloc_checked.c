#include "holberton.h"
#include <stdlib.h>
/**
* malloc_checked - allocates memory using "malloc".
* @b: size of memory to allocate.
* Return: pointer to allocated memory, or exit status 98 upon failure.
*/
void *malloc_checked(unsigned int b)
{
	void *mem;

	mem = malloc(b);
	if (mem == NULL)
	{
		free(mem);
		exit(98);
	}
	return (mem);
}
