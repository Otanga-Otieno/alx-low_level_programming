#include "main.h"

/**
 * print_sign - Return int sign
 * Return: 1 if +ve, -1 if -ve, 0 otherwise
 * @n: n is an integer
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
