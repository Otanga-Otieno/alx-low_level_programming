#include "main.h"

/**
 * _strlen - String length
 * @s: a string
 * Return: integer, string length
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

/**
 * _strcpy - Copy string
 * @dest: a buffer
 * @src: a source
 * Return: string copy
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; i <= _strlen(src); i++)
		dest[i] = src[i];

	return (dest);
}
