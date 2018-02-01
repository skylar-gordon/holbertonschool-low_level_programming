#include "holberton.h"
#include "strlen.c"

/**
* _strcat - concatenates two strings.
* @dest: The string added to.
* @src: The string added onto the end of @dest.
* Return: concatenated string.
*/

char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	for (i = _strlen(dest), j = 0; j < _strlen(src); j++)
		dest[i + j] = src[j];
	return dest;
}
