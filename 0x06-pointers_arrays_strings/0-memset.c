#include "holberton.h"
/**
* _memset - sets the memory of specific bytes to a new value.
* @s: The first byte.
* @b: The new value.
* @n: How many bytes.
* Return: Pointer to memory area s.
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 1; i <= n; i++)
		*(s + (i - 1)) = b;
	return (s);
}
