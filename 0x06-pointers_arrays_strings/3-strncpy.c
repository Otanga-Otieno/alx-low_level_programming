#include "main.h"

/**
 * _strncpy - copy string
 * @dest: destination string
 * @src: source string
 * @n: integer
 * Return: string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	
    /* pad null bytes if src < n */
    while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}