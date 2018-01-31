#include "holberton.h"

/**
* print_rev - Prints the reverse of a string.
* @s: The string in question.
* Return: Void
*/

void print_rev(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
		i++;

	while (i >= 0)
		_putchar(s[i]);
		i--;
	_putchar('\n');
}
