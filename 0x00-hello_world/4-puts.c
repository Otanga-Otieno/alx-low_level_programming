#include <stdio.h>
#include <string.h>

/**
 * main - Print one line using puts
 * Return: 0 if function succeeds
 */
int main(void)
{
	char str[53];

	strcpy(str, "\"Programming is like building a multilingual puzzle\n");
	puts(str);
	return (0);
}
