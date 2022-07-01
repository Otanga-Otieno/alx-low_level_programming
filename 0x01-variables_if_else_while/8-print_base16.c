#include <stdio.h>

/**
 *main - print hexadecimal
 *Return:  0 on success
 */

int main(void)
{
	char i;

	for (i = '0'; i <= '9'; i++)
		putchar(i);
	for (i = 'a'; i < 'g'; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
