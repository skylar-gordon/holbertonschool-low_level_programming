/**
* print_rev - Prints the reverse of a string.
* @s: The string in question.
* Return: Void
*/

void print_rev(char *s)
{
	int i;
	int j;

	i = 0;
	while (s[i] != '\0')
		i++;
	j = i;
	while (j >= 0)
		_putchar(s[j]);
		j--;
	_putchar('\n');
}
