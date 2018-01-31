#include "holberton.h"

/**
* _puts - prints the second half of the string.
* @str: The string in question.
* Return: Void
*/

void puts_half(char *str)
{
	int i;
	int j;
	int k;

	for (i = 0; str[i] != '\0'; i++)
		;
	if (i % 2 == 1)
		i++;
	j = i / 2;
	for (k = 0; k <= i; k++)
		if (k >= j)
			_putchar(str[k]);
	_putchar('\n');
}
