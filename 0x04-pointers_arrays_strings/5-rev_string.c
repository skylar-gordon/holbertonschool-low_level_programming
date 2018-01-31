#include "holberton.h"
#include "2-strlen.c"
/**
* rev_string - reverses a string and assigns it to the string.
* @s: The string.
* Return: Void.
*/
void rev_string(char *s)
{
	int i1;
	int i2;
	char a;

	for (i1 = 0, i2 = _strlen(s) - 1; i1 < i2; i1++, i2--)
	{
		a = s[i1];
		s[i1] = s[i2];
		s[i2] = a;
	}
}
