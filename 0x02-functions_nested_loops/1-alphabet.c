#include "main.h"

/**
 * print_alphabet - Print alphabet letters
 * Return: 0 on success
 */

void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
