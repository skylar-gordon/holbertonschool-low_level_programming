#include "holberton.h"

/**
* _puts - prints every other character in the string.
* @str: The string in question.
* Return: Void
*/

void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		if (i % 2 == 0)
			_putchar(str[i]);
	_putchar('\n');
}
