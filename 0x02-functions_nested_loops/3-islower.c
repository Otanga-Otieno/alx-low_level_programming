#include "main.h"

/**
 * _islower - find if lowercase
 * Return: 1 if true otherwise 0
 * @c: c is an ascii character
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
