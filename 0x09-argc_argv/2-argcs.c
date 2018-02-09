#include <stdio.h>
/**
* main - prints all arguments on the command line.
* @argc: Number of arguments
* @argv: Arguments
* Return: always 0.
*/
int main(int argc, char *argv[])
{
	int i;

	i = 0;
	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
