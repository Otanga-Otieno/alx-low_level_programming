#include "main.h"

/**
 * factorial - find factorial
 * @n: integer n
 * Return: integer, factorial of n
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}

	return (n * factorial(n - 1));
}
