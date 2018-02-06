#include "holberton.h"
/**
* _memcpy - copies a number of bytes from a source to a destination.
* @dest: Copied to.
* @src: Copied from
* @n: How many bytes.
* Return: Pointer to memory area dest.
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 1; i <= n; i++)
		*(dest + (i - 1)) = *(src + (i - 1));
	return (dest);
}
