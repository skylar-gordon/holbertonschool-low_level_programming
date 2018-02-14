#include "holberton.h"
#include <stdlib.h>
/**
* create_array - creates an array with size size, filled by char c.
* @size: Size of the array.
* @c: Character to fill the array with.
* Return: Pointer to array upon success, NULL if space is insufficient.
*/
char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *a = (char *)malloc(size);

	if (size == 0 || a == NULL)
	{
		free(a);
		return (NULL);
	}
	while (i < size)
	{
		a[i] = c;
		i++;
	}
	return (a);
}
