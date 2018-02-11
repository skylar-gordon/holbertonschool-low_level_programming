#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
* main - how many coins do I use to make change?
* @argc: number of arguments.
* @argv: arguments.
* Return: 0 if giving 1 argument (in addition to running the exe), 1 upon error
*/

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	int cents = atoi(argv[1]);
	int change = 0;

	if (cents >= 25)
	{
		change += cents / 25;
		cents = cents % 25;
	}

	if (cents >= 10)
	{
		change += cents / 10;
		cents = cents % 10;
	}

	if (cents >= 5)
	{
		change += cents / 5;
		cents = cents % 5;
	}

	if (cents >= 2)
	{
		change += cents / 2;
		cents = cents % 2;
	}

	if (cents == 1)
	{
		change += 1;
	}

	printf("%d\n", change);
	return (0);
}
