#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * *create_array - initialize array of chars
 * Return: pointer to array, NULL otherwsie
 * @size: size of array
 * @c: character to fill
 */

char *create_array(unsigned int size, char c)
{
	char *ptr = malloc(size);
	int count = 0;
	int slots = size;

	if (slots == 0)
	{
		return (NULL);
	}
	if (ptr == NULL)
	{
		return (NULL);
	}

	while (count < slots)
	{
		ptr[count] = c;
		count++;
	}
	return (ptr);

}
