#include "holberton.h"
#include <stdio.h>
/**
* print_diagsums - print the sum of two diagonals of a square matrix of arrays.
* @a: The array.
* @size: Size of the array.
* Return: Void.
*/
void print_diagsums(int *a, int size)
{
	int i;
	int j;
	int sum1;
	int sum2;

	if (size == 0)
		;
	else if (size == 1)
		printf("%d, %d\n", a[0], a[0]);
	else
		for (i = 0; i < size * size; i+= size + 1)
			sum1 += a[i];
		for (j = 0; j < size * size - 1; j+= size - 1)
			sum2 += a[j];
		printf("%d, %d\n", sum1, sum2);
}
