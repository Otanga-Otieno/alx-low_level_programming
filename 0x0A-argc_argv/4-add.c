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
	int sum = 0;
	int count = 1;
	int i = 0;

	while (count < argc)
	{
		for (i = 0; argv[count][i] != '\0'; i++)
		{
			if (argv[count][i] < '0' || argv[count][i] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[count]);
		count++;
	}

	printf("%i\n", sum);
	return (0);
}
