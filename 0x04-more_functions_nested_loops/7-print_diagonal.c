#include "main.h"

/**
 * print_diagonal - Print diagonal line
 * @n: n is an integer
 */

void print_diagonal(int n)
{
	int count, space;

	for (count = 0; count < n; count++)
	{
		for (space = 0; space <= count; space++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
	_putchar('\n');
}
