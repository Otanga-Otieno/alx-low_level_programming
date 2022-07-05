#include "main.h"

/**
 * _isalpha - find if uppercase
 * Return: 1 if true otherwise 0
 * @c: c is an ascii character
 */

int _isalpha(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
