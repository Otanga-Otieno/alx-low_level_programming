#include "main.h"
#define NULL 0

/**
 * _strpbrk - search bytes
 * @s: string
 * @accept: byte to match
 * Return: pointer to matched byte
 */

char *_strpbrk(char *s, char *accept)
{
	int i = 0;
	int j;

	while (s[i] != '\0')
	{

		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				s = &s[i];
				return (s);
			}
		}
		i++;
	}
	return (NULL);

}
