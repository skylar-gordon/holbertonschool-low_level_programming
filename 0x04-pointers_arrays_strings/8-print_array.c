#include <stdio.h>
#include "holberton.h"
/**
* print_array - prints the requested integers in the array.
* @a: The array.
* @n: The number of integers requested.
* Return: Void.
*/
void print_array(int *a, int n)
{
	int j;

	for (j = 0; j < n; j++)
	{
		printf("%d", a[j]);
		if (j != n - 1)
			printf(", ");
	}
	printf("\n");
}
