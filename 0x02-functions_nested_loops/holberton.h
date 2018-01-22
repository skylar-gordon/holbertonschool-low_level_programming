#include <unistd.h>
#include <ctype.h>

/**
* _putchar - writes the character c into stdout
* @c: The character to print
*
* Return: On success 1.
* On error, -1 is returned.
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}

void print_alphabet(void)
{
	int i = 97;
	while (i < 123)
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}

void print_alphabet_x10(void)
{
	int i = 0;
	while (i < 10)
	{
		int j = 97;
		while (j < 123)
		{
			_putchar(j);
			j++;
		}
		_putchar('\n');
		i++;
	}
}

int _islower(int c)
{
	if (tolower(c) == c)
		return (1);
	else
		return (0);
}
