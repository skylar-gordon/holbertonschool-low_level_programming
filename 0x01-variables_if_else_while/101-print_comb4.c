#include <stdio.h>
/**
* main - print all three digit combinations (0-9) that...
* ... do not repeat numbers and are not composed of previous combinations
* Return: 0 upon script completion
*/
int main(void)
{
	int n = 48;
	int nn = 49;
	int nnn = 50;

	while (n <= 55)
	{
		if (nnn == 58)
		{
			nnn = nn + 1;
			nn++;
		}
		if (nn == 57)
		{
			nn = n + 1;
			n++;
		}

		if (nn < nnn && n < nn)
		{
			putchar(n);
			putchar(nn);
			putchar(nnn);
			nnn++;
			if (n < 55)
			{
				putchar(44);
				putchar(32);
			}
		}
		else
		{
			nnn++;
		}
	}
	putchar('\n');
	return (0);
}
