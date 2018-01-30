#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <string.h>
#include "putchar.h"

/**
* reset_to_98 - sets a provided integer to the value 98.
* @n: the integer variable to change.
*
* Return: Void.
*/

void reset_to_98(int *n)
{
	*n = 98;
}

/**
* swap_int - swaps the values of two integers.
* @a: integer 1.
* @b: integer 2.
*
* Return: Void.
*/
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}

/**
* _strlen - provides string length.
* @s: The string in question.
*
* Return: length of string.
*/

int _strlen(char *s)
{
	char length = strlen(s);

	return length;
}

void _puts(char *str)
{
	int i;
	for (i = 0; i < _strlen(str); i++)
		_putchar(str[i]);
	_putchar('\n');
}

void print_rev(char *s)
{
	int j;
	for (j = _strlen(s) - 1; j >= 0; j--)
		_putchar(s[j]);
	_putchar('\n');
}

#endif /* HOLBERTON_H */
