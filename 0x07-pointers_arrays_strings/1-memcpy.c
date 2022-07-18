#include "main.h"

/**
 * *_memcpy - Copy n bytes fro source to destination
 * Return: pointer to @dest
 * @dest: memory area to copy to
 * @src: memory area to copy from
 * @n: number of bytes to copy
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int count = 0;
	int size = n;

	while (count < size)
	{
		dest[count] = src[count];
		count++;
	}
	return (dest);
}
