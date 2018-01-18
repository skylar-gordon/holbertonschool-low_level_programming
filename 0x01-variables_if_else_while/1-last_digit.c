#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main - Is the last digit of a random number 0, less than 6, or greater than 5
* Return: 0 upon script completion.
*/
int main(void)
{
	int n;
	int last;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last = n % 10;

	if (last == 0)
		printf("Last digit of %d is 0 and is 0\n", n);
	else
		if (last > 5)
			printf("Last digit of %d is %d and is greater than 5\n", n, last);
		else
			printf("Last digit of %d is %d and is less than 6 and not 0\n", n, last);
	return (0);
}
