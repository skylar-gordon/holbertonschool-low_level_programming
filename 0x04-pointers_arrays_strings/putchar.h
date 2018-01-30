#ifndef PUTCHAR_H
#define PUTCHAR_H
#include <unistd.h>

int _putchar(char c)
{
	return (write(1, &c, 1));
}

#endif /* PUTCHAR_H */
