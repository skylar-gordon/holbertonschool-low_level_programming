#include "holberton.h"
#include "strlen.c"
/**
* leet - converts string to modern leet.
* @s: String in question.
* Return: new string.
*/

char *leet(char *s)
{
	int i;
	int j;
	int arr1[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	int arr2[] = {'4', '3', '0', '7', '1'};

	for (i = 0; i < _strlen(s); i++)
		for (j = 0; j < 10; j++)
			if (s[i] == arr1[j])
				s[i] = arr2[(j - j % 2) / 2];
	return (s);
}
