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

	if (s == NULL)
	{
		return (size);
	}
	while (s[size] != '\0')
	{
		size++;
	}
	return (size);
}

/**
 * *string_nconcat - concatenate two strings
 * Return: pointer to string
 * @s1: first string
 * @s2: second string
 * @n: bytes of s2 to use
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int m = n;
	int size1 = string_size(s1);
	int size2 = string_size(s2);
	int count = 0;
	char *ptr;

	if (m > size2)
	{
		m = size2;
	}
	ptr = malloc(size1 + m + 1);

	if (ptr == NULL)
	{
		return (NULL);
	}
	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	while (count < (size1 + m))
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
	ptr[count] = '\0';
	return (ptr);
}
