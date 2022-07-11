#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Generate passwords
 * Return: 0 on success
 */
int main(void)
{
	int n, count, total;

	srand(time(NULL));
	for (count = 0, total = 2772; total > 122; count++)
	{
		n = (rand() % 125) + 1;
		printf("%c", n);
		total -= n;
	}
	printf("%c", total);

	return (0);
}
