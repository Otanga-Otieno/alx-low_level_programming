#include "main.h"
#include <stdlib.h>

/**
 * *malloc_checked - allocate memory
 * Return: pointer to space
 * @b: space to allocate
 */

void *malloc_checked(unsigned int b)
{
	char *ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
