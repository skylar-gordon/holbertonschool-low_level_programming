/**
* _strlen - provides string length.
* @s: The string in question.
*
* Return: length of string.
*/

int _strlen(char *s)
{
	unsigned int i;

	while (i <= sizeof(s) + 1)
		i++;
	return (i);
}
