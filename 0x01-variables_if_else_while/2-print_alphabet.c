#include <stdio.h>

/**
 * main - Print alphabet letters
 * Return: 0 on success
 */

int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
