#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - prints numbers, separated by a char separator.
 * @separator: The separator of numbers.
 * @n: Number of numbers to print.
 * Return: Void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list splitnumlist;
	unsigned int iter;

	iter = 0;
	va_start(splitnumlist, n);

	for (iter = 0; iter < n; iter++)
	{
		printf("%d", va_arg(splitnumlist, int));
		if (iter != n - 1 && separator != NULL)
			printf("%s", separator);
		if (iter == n - 1)
			printf("\n");
	}
	va_end(splitnumlist);
}
