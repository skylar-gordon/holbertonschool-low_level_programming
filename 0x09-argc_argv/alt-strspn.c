#include "holberton.h"
#include "strlen.c"
/**
* _strspn - get the length of a prefix substring.
* @s: The string
* @accept: The characters that are acceptable to continue counting.
* Return: Length of prefix substring.
*/
int _altstrspn(char *s, char *accept)
{
	int i;
	int j;

	for (i = 0; i < _strlen(s); i++)
	{
		for (j = 0; j < _strlen(accept); j++)
			if (*(s + i) == *(accept + j))
				break;
		if (*(s + i) != *(accept + j))
			break;
	}
	return (i);
}
