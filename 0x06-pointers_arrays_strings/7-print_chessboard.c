#include "holberton.h"
/**
* print_chessboard - Prints a 2D array, up to the 8th character of each array.
* @a: The array.
* Return: Void.
*/
void print_chessboard(char (*a)[8])
{
	int i;
	int j;

	i = 0;
	while (i < 8)
	{
		for (j = 0; j < 8; j++)
			_putchar(a[i][j]);
		if (i != 8)
			_putchar('\n');
		i++;
	}
}
