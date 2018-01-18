#include <stdio.h>

/**
* main - prints the alphabet.
* Return: 0 upon script completion.
*/
int main(void)
{
	int ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
/*	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch); */
	putchar('\n');
	return (0);
}
