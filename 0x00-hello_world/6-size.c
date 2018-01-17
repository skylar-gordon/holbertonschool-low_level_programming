#include <stdio.h>
/**
* main - prints the sizes of several common data types in bytes.
* Return: 0 upon script completion.
*/
int main(void)
{
int i;
int variableSizes[6] = {sizeof(char), sizeof(int), sizeof(long int)};
variableSizes[3] = sizeof(long long int);
variableSizes[4] = sizeof(float);
char *variableNames[6] = {"char", "int", "long int", "long long int", "float"};

for (i = 0; i < 5; i++)
{
	if (i == 1)
		printf("Size of an %s: %d byte(s)\n", variableNames[i], variableSizes[i]);
	else
		printf("Size of a %s: %d byte(s)\n", variableNames[i], variableSizes[i]);
}
return (0);
}
