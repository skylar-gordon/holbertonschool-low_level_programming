#include "holberton.h"

/**
* puts_half - prints the second half of the string.
* @str: The string in question.
* Return: Void
*/

void puts_half(char *str)
{
	int i;
	int j;

	i = 0;
	while (str[i] != '\0')
		i++;
	if (i % 2 == 1)
		i--;
	j = i / 2 + 1;
	while (j <= i)
	{
		_putchar(str[j]);
		j++;
	}
	_putchar('\n');
}
