#include "main.h"

/**
 * _pow_recursion - raise number to power
 * Return: integer, x raised to power y
 * @x: integer to raise
 * @y: power
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	if (y == 1)
	{
		return (x);
	}

	return (x * _pow_recursion(x, --y));
}
