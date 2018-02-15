#include "holberton.h"
#include "strlen.c"
#include <stdlib.h>
/**
* str_concat - concatenates two strings.
* @s1: String being added to.
* @s2: String being added to s1.
* Return: pointer to concatenated string upon success, NULL upon failure.
*/
char *str_concat(char *s1, char *s2)
{
	int size1 = _strlen(s1);
	int size2 = _strlen(s2);
	char *s3 = (char *)malloc(sizeof(char) * (size1 + size2));
	int i = 0;
	int j = 0;

	if (s3 == NULL)
	{
		free(s3);
		return (NULL);
	}

	while (i < size1)
	{
		s3[i] = s1[i];
		i++;
	}
	while (j < size2)
	{
		s3[i + j] = s2[j];
		j++;
	}
	return (s3);
}
