#include <stdio.h>
/**
* main - Prints name of the C file the program was compiled from.
* Return: Always 0.
*/

int main(void)
{
	printf("%s\n", __BASE_FILE__);
	return (0);
}
