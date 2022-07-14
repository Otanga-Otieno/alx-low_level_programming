#include "main.h"

/**
 * reverse_array - Reverse array
 * @a: integer array
 * @n: integer
 */

void reverse_array(int *a, int n)
{
	int tmp = 0;
	int start = 0;
	int end = n - 1;

	while (start < end)
	{
		tmp = *(a + start);
		*(a + start) = *(a + end);
		*(a + end) = tmp;
		start++, end--;
	}
}
