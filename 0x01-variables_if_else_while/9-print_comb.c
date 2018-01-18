#include <stdio.h>

/**
* main - prints base10 numbers 0-9 followed by space and ,
* Return: 0 upon script completion.
*/
int main(void)
{
	int n = 48;

	while (n <= 57)
	{
		putchar(n);
		if (n != 57)
		{
			putchar(44);
			putchar(32);
		}
		n++;
	}
	putchar('\n');
	return (0);
}
