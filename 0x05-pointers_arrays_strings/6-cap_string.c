#include "holberton.h"
#include "strlen.c"
/**
* cap_string - capitalizes the first letter of every word in a string.
* @s: The string in question.
* Return: altered string.
*/
char *cap_string(char *s)
{
	int i;
	int k;
	char arr[] = {9, 10, 32, 33, 34, 40, 41, 44, 46, 59, 63, 123, 125};

	for (i = 0; i < _strlen(s); i++)
	{
		for (k = 0; k < _strlen(arr); k++)
			if (s[i - 1] == arr[k] || i == 0)
				if (s[i] >= 97 && s[i] <= 122)
					s[i] = s[i] - 32;
	}
	return (s);
}
