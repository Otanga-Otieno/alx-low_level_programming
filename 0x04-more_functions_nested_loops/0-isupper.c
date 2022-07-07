#include "main.h"

/**
 * _isupper - checks case
 * Return: 1 if uppercase otherwise 0
 * @c: c is an integer
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
