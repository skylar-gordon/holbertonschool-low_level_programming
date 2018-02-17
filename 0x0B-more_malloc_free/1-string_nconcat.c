#include "holberton.h"
#include "strlen.c"
#include <stdlib.h>
#include <string.h>
/**
* string_nconcat - concatenates two strings, up to the nth point in string 2.
* @s1: string added to.
* @s2: string added.
* @n: how many characters of s2 to add.
* Return: pointer to new string upon success, NULL upon failure.
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int howfar;
	char *newstring;
	int first;
	int concat;

	if (n <= 0)
		return (NULL);
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	if (n >= (unsigned int)_strlen(s2))
		howfar = _strlen(s2);
	else
		howfar = n;

	newstring = (char *)malloc(howfar + _strlen(s1));
	if (newstring == NULL)
	{
		free(newstring);
		return (NULL);
	}
	for (first = 0; first < _strlen(s1); first++)
		newstring[first] = s1[first];
	for (concat = 0; concat < howfar ; concat++)
		newstring[first + concat] = s2[concat];

	return (newstring);
}
