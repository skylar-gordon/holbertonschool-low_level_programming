#include "holberton.h"
#include "strlen.c"
/**
* cap_string - capitalizes the first letter of every word in a string.
* @s: The string in question.
* Return: altered string.
*/
char *cap_string(char *s)
{
	int i;
	char j;

	for (i = 0; i < _strlen(s); i++)
	{
		j = s[i - 1];
		if (j == 9 || j == 10 || j == 32 || j == 33 || j == 40 || j == 41 || j == 42 || j == 44 || j == 46 || j == 59 || j == 63 || j == 123 || j == 125)
			if (s[i] >= 97 && s[i] <= 122)
				s[i] = s[i] - 32;
	}
	return (s);
}
