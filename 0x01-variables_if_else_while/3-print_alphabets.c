#include <stdio.h>

/**
* main - prints the alphabet.
* Return: 0 upon script completion.
*/
int main(void)
{
	int ch = 'a';
	int ch2 = 'A';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}

	while (ch2 <= 'Z')
	{
		putchar(ch2);
		ch2++;
	}

	putchar('\n');
	return (0);
}
