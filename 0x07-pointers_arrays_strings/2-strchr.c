#include "main.h"
#define NULL 0

/**
 * *_strchr - locate a character in a string
 * Return: pointer to the first occurrence of c otherwise NULL
 * @s: string
 * @c: character to search
 */

char *_strchr(char *s, char c)
{
	int count = 0;

	while (s[count] != '\0')
	{
		if (s[count] == c)
		{
			return (&s[count]);
		}
		count++;
	}
	return (NULL);
}
