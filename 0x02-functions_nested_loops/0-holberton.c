#include <stdio.h>
#include "holberton.h"

/**
* main - prints value of variable betty, demonstrating while loops.
* Return: 0 upon script completion.
*/

int main(void)
{
	char *betty = "Holberton";
	int i = 0;

	while (i < 9)
	{
		putchar(betty[i]);
		i++;
	}
	putchar('\n');
	return (0);
}
