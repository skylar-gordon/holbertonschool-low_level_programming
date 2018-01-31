#include "holberton.h"
#include "2-strlen.c"

/**
* print_rev - Prints the reverse of a string.
* @s: The string in question.
* Return: Void
*/

void print_rev(char *s)
{
	int len;

	len = _strlen(s) - 1;
	while (len >= 0)
	{
		_putchar(s[len]);
		len--;
	}
	_putchar('\n');
}
