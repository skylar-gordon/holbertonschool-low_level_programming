#include "holberton.h"
#include <stdlib.h>
#include "strlen.c"
/**
* _strdup - duplicates a given string.
* @str: Given string.
* Return: Pointer to duplicate string upon success, NULL upon failure.
*/
char *_strdup(char *str)
{
	int i = 0;
	int size = _strlen(str);
	char *dupe = (char *)malloc(sizeof(char) * size);

	if (size == 0 || str == NULL)
	{
		free(dupe);
		return (NULL);
	}
	while (i < _strlen(str))
	{
		dupe[i] = str[i];
		i++;
	}
	return (dupe);
}
