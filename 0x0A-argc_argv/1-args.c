#include <stdio.h>

/**
 * main - print program name
 * Return: 0 on success
 * @argc: argument count
 * @argv: argument vector
 */

int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
