#include <stdio.h>
#include <stdlib.h>
#include "alt-strspn.c"
/**
* main - adds numbers.
* @argc: Number of arguments.
* @argv: Arguments.
* Return: 0, unless error - then 1.
*/
int main(int argc, char *argv[])
{
	int i;
	/** int j; */
	int sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		if (_altstrspn(argv[i], "0123456789") != _strlen(argv[i]))
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			sum += atoi(argv[i]);
		}
	}
	printf("%d\n", sum);
	return (0);
}
