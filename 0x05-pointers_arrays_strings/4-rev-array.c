#include "holberton.h"
/**
* reverse_array - reverses an array of integers.
* @a: array
* @n: number of elements in the array
* Return: Void.
*/
void reverse_array(int *a, int n)
{
	int i1;
	int i2;
	char p;

	for (i1 = 0, i2 = n - 1; i1 < i2; i1++, i2--)
	{
		p = a[i1];
		a[i1] = a[i2];
		a[i2] = p;
	}
}
