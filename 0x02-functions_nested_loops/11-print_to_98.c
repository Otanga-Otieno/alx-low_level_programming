#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - Print from n to 98
 * Description: Prints all natural numbers from n - 98
 * Return: void
 * @n: n is an integer
 */

void print_to_98(int n)
{
	if (n < 98)
	{
		while (n < 98)
		{
			printf("%d, ", n);
			n++;
		}
	}
	else if (n > 98)
	{
		while (n > 98)
		{
			printf("%d, ", n);
			n--;
		}
	}
	printf("98\n");
}
