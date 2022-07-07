#include "main.h"

/**
 * print_number - Print an integer
 * @n: n is an integer
 */

void print_number(int n)
{
	unsigned int tens, digit, positive = n;
	double d = 1;

	if (n == 0)
	{
		_putchar('0');
	}
	else
	{
		if (n < 0)
		{
			positive = n * -1;
			_putchar('-');
		}

		while (d <= positive)
		{
			d *= 10;
		}
		tens = d / 10;

		while (tens >= 1)
		{
			digit = positive / tens;
			_putchar(digit + '0');
			positive = (positive - (tens * digit));
			tens /= 10;
		}
	}
}
