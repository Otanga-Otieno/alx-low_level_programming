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
 * *argstostr - concatenate all arguments
 * Return: pointer to string
 * @ac: argument count
 * @av: argument values
 */

char *argstostr(int ac, char **av)
{
	char *ptr;
	int length = 0;
	int i, j, k;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		length += string_size(av[i]);
	}
	length += (ac + 1);

	ptr = malloc(length * sizeof(char));

	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		for (j = 0; j < string_size(av[i]); j++)
		{
			ptr[k++] = av[i][j];
		}
		ptr[k++] = '\n';
	}
}
