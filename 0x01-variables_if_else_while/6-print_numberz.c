#include <stdio.h>

/**
 * main - Print numbers 0 to 9;
 * Return: 0 on success
 */

int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
