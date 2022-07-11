#include "main.h"

/**
 * _strlen - String length
 * @s: a string
 * Return: integer, string length
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}

	return (len);
}

/**
 * puts_half - Print half a string
 * @str: a string
 */

void puts_half(char *str)
{
	int index;
	int len = _strlen(str);

	if (len % 2 != 0)
		index = (len / 2) + 1;
	else
		index = (len / 2);

	while (index < len)
	{
		_putchar(*(str + index));
		index++;
	}
	_putchar('\n');
}
