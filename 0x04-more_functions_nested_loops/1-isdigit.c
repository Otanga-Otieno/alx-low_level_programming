#include "main.h"

/**
 * _isdigit - check if digit
 * Return: 1 if digit otherwise 0
 * @c: c is an integer
 */

int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
