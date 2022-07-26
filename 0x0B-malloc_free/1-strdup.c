#include "main.h"
#include "stdlib.h"

/**
 * *_strdup - duplicate string 
 * Return: pointer to duplicated string
 * @str: string to duplicate
 */

char *_strdup(char *str)
{
	char *ptr;
	int size = 0;
	int count = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[size] != '\0')
	{
		size++;
	}

	ptr = malloc(size);

	while (count <= size)
	{
		ptr[count] = str[count];
		count++;
	}
	return (ptr);
}
