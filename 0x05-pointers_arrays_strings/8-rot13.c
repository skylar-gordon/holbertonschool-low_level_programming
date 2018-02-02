#include "holberton.h"
#include "strlen.c"
/**

*/
char *rot13(char *s)
{
	int i;

	for (i = 0; i < _strlen(s); i++)
		if ((s[i] >= 97 && s[i] <= 109) || (s[i] >= 65 && s[i] <= 77))
			s[i] = s[i] + 13;
		else if ((s[i] >= 110 && s[i] <= 122) || (s[i] >= 78 && s[i] <= 90))
			s[i] = s[i] - 13;
	return (s);
}
