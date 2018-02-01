#include "holberton.h"
#include "2-strlen.c"
/**
* *_strcpy - copies the string pointed to by the source to the destination."
* @dest: copying to.
* @src: copying from.
* Return: Pointer to dest.
*/

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; i < _strlen(src); i++)
		dest[i] = src[i];
	return (dest);
}
