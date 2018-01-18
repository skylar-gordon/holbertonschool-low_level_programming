#include <stdio.h>

/**
* main - prints the alphabet, except e and q.
* Return: 0 upon script completion.
*/
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch != 'e' && ch != 'q')
			putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
