/**
* swap_int - swaps the value of two variables.
* @a: variable 1.
* @b: variable 2.
* Return: Void.
*/
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
