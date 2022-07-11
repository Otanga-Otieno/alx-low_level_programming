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
 * beginning - Start of number
 * @s: string to search
 * Return: integer index where digit is first found
 */

int beginning(char *s)
{
	int i;

	for (i = 0; i < _strlen(s); i++)
	{
		if (s[i] >= '0' && s[i] <= '9')
			return (i);
	}
	return (-1);
}

/**
 * signage - Number sign
 * @s: integer
 * Return: 1 if positive otherwise -1
 */
int signage(char *s)
{
	int negatives = 0, i = 0, sign = 1;

	while (i < (beginning(s)))
	{
		if (s[i++] == '-')
			negatives++;
	}

	if (negatives % 2 != 0)
		sign = -1;

	return (sign);
}

/**
 * _atoi - Convert string to int
 * @s: a string
 * Return: integer
 */

int _atoi(char *s)
{

	int start = (beginning(s));
	int sign;
	int digits = 0;
    int digit = (beginning(s));
	unsigned int num = 0;
	int x = 1;
	int i;

	if (start < 0)
		return (0);

	sign = signage(s);

	while ((s[start] >= '0' && s[start] <= '9')
	       && (start <= _strlen(s)))
	{
		digits += 1;
		start++;
	}

	i = 1;
	while (i < digits)
	{
		x *= 10;
		i++;
	}

	for (i = digit; i < (digit + digits); i++)
	{
		num += (s[i] - '0') * x;
		x /= 10;
	}

	return (num * sign);
}
