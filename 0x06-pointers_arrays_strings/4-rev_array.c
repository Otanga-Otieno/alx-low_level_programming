#include "main.h"

/**
 * reverse_array - Reverse array
 * @a: integer array
 * @n: integer
 */

void reverse_array(int *a, int n)
{
	int tmp;
	int start, end = n - 1;

	while (start < end)
	{
		tmp = *(a + start);
		*(a + start) = *(a + end);
		*(a + end) = tmp;
		start++, end--;
	}
}
