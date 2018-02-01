#include "holberton.h"
#include "strlen.c"
/**
* _strcmp - compares two strings, and returns their lexographical difference.
* @s1: Comparative string 1.
* @s2: Comparative string 2.
* Return: Lexographical difference between the strings.
*/

int _strcmp(char *s1, char *s2)
{
	int i;
	int len;
	int val;

	if (s1 > s2)
		len = _strlen(s1);
	else
		len = _strlen(s2);

	i = 0;
	while (i < len)
	{
		val = s1[i] - s2[i];
		if (val != 0)
			break;
		i++;
	}
	return (val);
}
