#include "main.h"

/**
 * _strlen - Return length of a string
 * @s: a string
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}

	return (len);
}