#include <stdio.h>
/**
* main - print all two digit combinations (0-9) that...
* ... do not repeat numbers and are not reverses of previous combinations
* Return: 0 upon script completion
*/
int main(void)
{
	int n = 48;
	int nn = 49;

	while (n <= 56)
	{
		if (nn == 58)
		{
			nn = n + 1;
			n++;
		}

		if (n < nn)
		{
			putchar(n);
			putchar(nn);
			nn++;
			if (n < 56)
			{
				putchar(44);
				putchar(32);
			}
		}
		else
		{
			nn++;
		}
	}
	putchar('\n');
	return (0);
}
