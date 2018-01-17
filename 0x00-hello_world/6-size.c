#include <stdio.h>

int main () {
	int i;
	int variableSizes[5] = {sizeof (char), sizeof (int), sizeof (long int), sizeof (long long int), sizeof (float)};
	char * variableNames[5] = {"char", "int", "long int", "long long int", "float"};
	for (i = 0; i < 5; i++)
	{
		printf("Size of a %s: %d byte(s) \n", variableNames[i], variableSizes[i]);
	}
	return 0;
}
