#include <stdio.h>
#include <stdlib.h>

/**
 * main - print program name
 * Return: 0 on success
 * @argc: argument count
 * @argv: argument vector
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%i\n", (atoi(argv[1]) * atoi(argv[2])));
	return (0);
}
