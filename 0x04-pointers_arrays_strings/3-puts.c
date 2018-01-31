/**
* _puts - prints the string.
* @str: The string in question.
* Return: Void
*/

void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);
	_putchar('\n');
}
