#include "holberton.h"
#include "strlen.c"

/**
* _strncpy - copies a string into another string, up to 'n' bytes.
* @dest: The string copied to.
* @src: The string copied from.
* @n: The number of bytes to copy from @src.
* Return: copied string.
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && i <= _strlen(src); i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
