#include "main.h"

/**
 * print_line - Print line
 * @n: n is an integer
 */

void print_line(int n)
{
	int count = 0;

	while (count < n)
	{
		_putchar('_');
		count++;
	}
	_putchar('\n');
}
