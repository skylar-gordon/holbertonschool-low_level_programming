#include "holberton.h"
#include "strlen.c"
/**
* 
*/
char *string_toupper(char *s)
{
	int i;

	for (i = 0; i < _strlen(s); i++)
	{
		if (s[i] >= 97 && s[i] <= 122)
			s[i] = s[i] - 32;
	}
	return (s);
}
