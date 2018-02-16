#include "holberton.h"
#include "strlen.c"
#include <stdlib.h>
/**
* string_nconcat - concatenates two strings, up to the nth point in string 2.
* @s1: string added to.
* @s2: string added.
* @n: how many characters of s2 to add.
* Return: pointer to new string upon success, NULL upon failure.
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int howlong;
	char *newstring;
	int first;
	unsigned int concat;

	if (n <= 0)
		return (NULL);
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	if (n < sizeof(s2))
		howlong = sizeof(s1) + sizeof(s2);
	else
		howlong = sizeof(s1) + n;

	newstring = (char *)malloc(howlong);
	if (newstring == NULL)
	{
		free(newstring);
		return (NULL);
	}
	for (first = 0; first < _strlen(s1); first++)
		newstring[first] = s1[first];
	for (concat = 1; concat <= n; concat++)
		newstring[_strlen(s1) + concat - 1] = s2[concat - 1];

	return (newstring);
}
