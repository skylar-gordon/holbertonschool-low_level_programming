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

	for (i = 0; i < _strlen(s); i++)
	{
		if (s[i-1] <= 33 || s[i-1] == 46 || s[i-1] == 63)
			if (s[i] >= 97 && s[i] <= 122)
				s[i] = s[i] - 32;
	}
	return (s);
}
