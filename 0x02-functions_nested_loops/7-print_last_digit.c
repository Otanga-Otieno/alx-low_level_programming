#include "main.h"

/**
 * print_last_digit - Print last digit of number
 * Return: integer
 * @n: n is an integer
 */

int print_last_digit(int n)
{
	int digit = n % 10;

	if (n < 0)
		digit *= -1;

	_putchar(digit + '0');
	return (digit);
}
