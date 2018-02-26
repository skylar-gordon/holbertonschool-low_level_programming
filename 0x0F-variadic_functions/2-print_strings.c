#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - prints strings, separated by a char separator.
 * @separator: The separator of strings.
 * @n: Number of strings to print.
 * Return: Void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list splitstringlist;
	unsigned int iter;

	iter = 0;
	va_start(splitstringlist, n);

	for (iter = 0; iter < n; iter++)
	{
		if (splitstringlist == NULL)
			printf("(nil)");
		else
			printf("%s", va_arg(splitstringlist, char *));
		if (iter != n - 1 && separator != NULL)
			printf("%s", separator);
		if (iter == n - 1)
			printf("\n");
	}
	va_end(splitstringlist);
}
