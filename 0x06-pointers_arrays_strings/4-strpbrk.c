#include "holberton.h"
#include "strlen.c"
/**
* _strpbrk - print matching characters
* @s: The string
* @accept: The characters that are matched against
* Return: Pointer to first matching byte, or NULL if none found.
*/
char *_strpbrk(char *s, char *accept)
{
	int i;
	int j;

	for (i = 0; i < _strlen(s); i++)
	{
		for (j = 0; j < _strlen(accept); j++)
			if (*(s + i) == *(accept + j))
				break;
		if (*(s + i) == *(accept + j))
			break;
	}
	if (*(s + i) == *(accept + j))
		return ((s + i));
	else
		return (0);
}
