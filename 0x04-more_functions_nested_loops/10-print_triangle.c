#include "main.h"

/**
 * print_triangle - Print a triangle
 *@size: size is an integer
 */

void print_triangle(int size)
{
	int count, width, height;

	if (size <= 0)
		_putchar('\n');

	for (height = 1; height <= size; height++)
	{
		for (width = 1; width <= (size - height); width++)
			_putchar(' ');

		for (count = 1; count <= height; count++)
			_putchar('#');

		_putchar('\n');
	}
}
