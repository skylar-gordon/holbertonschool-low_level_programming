#include "holberton.h"
#include "strlen.c"
#include <stdlib.h>
/**
* 
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int howlong = _strlen(s1) + n;
	char *newstring = (char *)malloc(howlong);
	int first;
	unsigned int concat;

	if (newstring == NULL)
	{
		free(newstring);
		return (NULL);
	}
	for (first = 0; first < _strlen(s1); first++)
		newstring[first] = s1[first];
	for (concat = 1; concat <= n; concat++)
		newstring[_strlen(s1) + concat - 1] = s2[concat - 1];

	return(newstring);
}
