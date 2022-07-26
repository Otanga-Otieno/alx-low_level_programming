#include "main.h"
#include <stdlib.h>

/**
 * string_size - return size of string
 * Return: size of string
 * @s: string
 */

int string_size(char *s)
{
	int size = 0;

	while (s[size] != '\0')
	{
		size++;
	}
	return (size);
}

/**
 * *str_concat - concatenate strings
 * Return: pointer to string
 * @s1: first string
 * @s2: second string
 */

char *str_concat(char *s1, char *s2)
{
	int size1 = string_size(s1);
	int size2 = string_size(s2);
	int size = size1 + size2 + 1;
	int count = 0;
	char *ptr = malloc(size);

	if (ptr == NULL)
	{
		return (NULL);
	}

	while (count < size)
	{
		if (count < size1)
		{
			ptr[count] = s1[count];
		}
		else
		{
			ptr[count] = s2[count - size1];
		}
		count++;
	}
	ptr[size] = '\0';
	return (ptr);
}
