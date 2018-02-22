#include "function_pointers.h"

/**
 * print_name - Prints a name using a designated function.
 * @name: Name to print.
 * @f: Pointer to the designated function.
 * Return: Void
 */

void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}
