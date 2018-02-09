#include <stdio.h>
#include <stdlib.h>
/**
* main - multiplies two numbers provided in the command line.
* @argc: Number of arguments.
* @argv: Arguments.
* Return: 0 when provided two arguments, 1 when not.
*/
int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
