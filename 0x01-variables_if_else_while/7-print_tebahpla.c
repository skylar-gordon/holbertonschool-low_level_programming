#include <stdio.h>

/**
* main - prints the alphabet backwards.
* Return: 0 upon script completion.
*/
int main(void)
{
	int ch = 'z';

	while (ch >= 'a')
	{
		putchar(ch);
		ch--;
	}
	putchar('\n');
	return (0);
}
