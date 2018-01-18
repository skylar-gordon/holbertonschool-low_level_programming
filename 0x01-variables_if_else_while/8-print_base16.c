#include <stdio.h>

/**
* main - prints base16 digits 0-f.
* Return: 0 upon script completion.
*/
int main(void)
{
	int n = 48;
	int h = 'a';

	while (n <= 57)
	{
		putchar(n);
		n++;
	}
	while (h <= 'f')
	{
		putchar(h);
		h++;
	}
	putchar('\n');
	return (0);
}
