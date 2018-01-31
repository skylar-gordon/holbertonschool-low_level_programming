#include "holberton.h"
#include <stdio.h>

void print_array (int *a, int n)
{
	int i;
	int j;
	int arr[80];

	for (i = 0; i < n; i++)
	{
		arr[i] = a[i];
	}
	
	for (j = 0; j < i; j++)
	{
		printf("%d", arr[j]);
		if (j != i - 1)
			printf(", ");
	}
	putchar('\n');
}
