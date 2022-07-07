#include "main.h"

/**
 * print_diagonal - Print diagonal line
 * @n: n is an integer
 */

void print_diagonal(int n)
{
	int count, space;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	for (count = 1; count <= n; count++)
	{
		for (space = 1; space < count; space++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
