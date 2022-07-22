#include <stdio.h>

/**
 * main - print program name
 * Return: 0 on success
 * @argc: argument count
 * @argv: argument vector
 */

int main(int argc, char *argv[])
{
	int count = 0;

	while (count < argc)
	{
		printf("%s\n", argv[count]);
		count++;
	}
	return (0);
}
