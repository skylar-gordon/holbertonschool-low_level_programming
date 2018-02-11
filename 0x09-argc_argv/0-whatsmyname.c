#include <stdio.h>
/**
* main - prints the name of the executable file.
* @argc: Number of arguments.
* @argv: Arguments.
* Return: Always 0.
*/
int main(int argc __attribute__ ((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
