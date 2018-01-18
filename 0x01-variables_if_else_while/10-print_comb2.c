#include <stdio.h>

/**
* main - prints base10 numbers 00-99 followed by space and ,
* Return: 0 upon script completion.
*/
int main(void)
{
	int n = 48;
	int nn = 48;

	while (n <= 57 && nn <= 57)
	{
		putchar(n);
		putchar(nn);
		if (n != 57 || nn != 57)
		{
			putchar(44);
			putchar(32);
		}
		nn++;
		if (nn == 58 && n != 57)
		{
			nn = 48;
			n++;
		}
	}
	putchar('\n');
	return (0);
}
