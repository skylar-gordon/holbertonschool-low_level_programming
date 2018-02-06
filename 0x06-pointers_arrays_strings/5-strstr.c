#include "holberton.h"
#include "strlen.c"
/**
* _strstr - finds and prints the word we're lookin for.
* @haystack: String.
* @needle: Word we're looking for.
* Return: Pointer to data we're looking for, NULL if not found.
*/

char *_strstr(char *haystack, char *needle)
{
	int i;
	int j;
	int k = 0;

	for (i = 0; i < _strlen(haystack); i++)
	{
		for (j = 0; j < _strlen(needle); j++)
			if (*(haystack + i) == *(needle + j))
				k++;
			else
				k = 0;
		if (k == _strlen(needle) - 1)
			break;
	}
	i = i - _strlen(needle);

	if (k == 0)
		return (0);
	else
		return ((haystack + i));
}
