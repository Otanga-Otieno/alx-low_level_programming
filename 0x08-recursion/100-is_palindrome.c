#include "main.h"

/**
 * _strlen - length of a string
 * @s: a string
 * Return: integer, length of string
 */
int _strlen(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen(s + 1));
}

/**
 * _compare - match characters
 * @s: a string
 * @n1: first comparison
 * @n2: second comparison
 * Return: 1 if match otherwise 0
 */
int _compare(char *s, int n1, int n2)
{
	if (*(s + n1) == *(s + n2))
	{
		if (n1 == n2 || n1 == n2 + 1)
			return (1);
		return (0 + _compare(s, n1 + 1, n2 - 1));
	}
	return (0);
}

/**
 * is_palindrome - check if palindrome
 * @s: a string.
 * Return: 1 if palindrome otherwise 0
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (_compare(s, 0, _strlen(s) - 1));
}
