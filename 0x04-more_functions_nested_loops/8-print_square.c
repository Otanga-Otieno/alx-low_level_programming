#include "main.h"

/**
 * print_square - Print square
 * @size: size is an integer
 */

void print_square(int size)
{
	int down, across;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (down = 1; down <= size; down++)
	{
		for (across = 1; across <= size; across++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
