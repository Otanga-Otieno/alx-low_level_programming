#include "main.h"

/**
 * swap_int - Swap integers
 * @a: a is an integer
 * @b: b is an integer
 */

void swap_int(int *a, int *b)
{
	int swap = *a;

	*a = *b;
	*b = swap;
}
