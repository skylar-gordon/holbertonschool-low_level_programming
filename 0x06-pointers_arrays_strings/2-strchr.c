#include "holberton.h"
#include "strlen.c"
/**
* _strchr - locates the first instance of character c in string s.
* @s: The string.
* @c: The character to locate.
* Return: pointer to the first instance of character c.
*/
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; i < _strlen(s); i++)
		if (*(s + i) == c)
			break;
	return (s + i);
}
