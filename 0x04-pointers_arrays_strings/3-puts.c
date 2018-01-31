#include "2-strlen.c"

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
