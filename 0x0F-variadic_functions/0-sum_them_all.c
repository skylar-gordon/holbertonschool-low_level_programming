#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - adds all the numbers.
 * @n: numbers && number of arguments.
 * Return: Sum.
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list addlist;
	unsigned int sum;
	unsigned int iter;


	sum = 0;
	va_start(addlist, n);

	for (iter = 0; iter < n; iter++)
		sum += va_arg(addlist, int);

	va_end(addlist);
	return (sum);
}
