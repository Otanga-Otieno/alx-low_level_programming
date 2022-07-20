#include "main.h"

/**
 * _sqrt_recursion - find square root
 * Return: square root of n
 * @n: an integer
 */

int sqrt2(int num, int x)
{
	if (x * x == num)
	{
		return (x);
	}
	if (x * x > num)
	{
		return (-1);
	}
	return (sqrt2(num, x + 1));
}


int _sqrt_recursion(int n)
{
	return (sqrt2(n, 0));
}