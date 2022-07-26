#include "main.h"
#include <stdlib.h>

/**
 * **alloc_grid - create 2d array of integers
 * Return: 2d array otherwise NULL
 * @width: width of array
 * @height: height of array
 */

int **alloc_grid(int width, int height)
{
	int **ptr;
	int w;
	int h;

	if (width < 1)
	{
		return (NULL);
	}
	if (height < 1)
	{
		return (NULL);
	}

	ptr = malloc(height * sizeof(int *));

	if (ptr == NULL)
	{
		return (NULL);
	}
	for (w = 0; w < height; w++)
	{
		ptr[w] = malloc(width * sizeof(int));

		if (ptr[w] == NULL)
		{
			for (w = 0; w < height; w++)
			{
				free(ptr[w]);
			}
			free(ptr);
			return (NULL);
		}
		for (h = 0; h < width; h++)
		{
			ptr[w][h] = 0;
		}
	}
	return (ptr);
}
