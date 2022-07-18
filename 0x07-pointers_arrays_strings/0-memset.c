#include "main.h"

/**
 * *_memset - Fill memory with bytes
 * Return:  pointer to the memory area @s
 * @s: a memory area
 * @b: character to use as constant byte
 * @n: number of bytes to fill
 */

char *_memset(char *s, char b, unsigned int n)
{
	int count = 0;
	int size = n;

	while (count < size)
	{
		*s = b;
		s++;
		count++;
	}

	return (s);
}
