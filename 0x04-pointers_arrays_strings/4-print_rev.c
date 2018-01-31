#include <string.h>

/** #include "putchar.h" */

/**
* _strlen - provides string length.
* @s: The string in question.
*
* Return: length of string.
*/

int _strlen(char *s)
{
	char length = strlen(s);

	return (length);
}

/**
* _puts - prints the string.
* @str: The string in question.
* Return: Void
*/

void _puts(char *str)
{
	int i;

	for (i = 0; i < _strlen(str); i++)
		_putchar(str[i]);
	_putchar('\n');
}

/**
* print_rev - Prints the reverse of a string.
* @s: The string in question.
* Return: Void
*/

void print_rev(char *s)
{
	int j;

	for (j = _strlen(s) - 1; j >= 0; j--)
		_putchar(s[j]);
	_putchar('\n');
}
