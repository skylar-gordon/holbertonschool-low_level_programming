#include "holberton.h"

/**
* puts_half - prints the second half of the string.
* @str: The string in question.
* Return: Void
*/

void puts_half(char *str)
{
	int i;
	int iplus;
	int j;

	i = 0;
	while (str[i] != '\0')
		i++;
	if (i % 2 == 1)
		iplus = i + 1;
	else
		iplus = i;
	j = iplus / 2;
	while (j < i)
	{
		_putchar(str[j]);
		j++;
	}
	_putchar('\n');
}
