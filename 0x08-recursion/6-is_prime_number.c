#include "main.h"

/**
 * prime - check primeness of a number
 * Return: 1 if prime otherwise 0
 * @num: integer to check
 * @divisor: divisor to check against
 */

int prime(int num, int divisor)
{
	if (divisor >= num)
	{
		return (1);
	}
	if ((num % divisor) != 0)
	{
		return (prime(num, divisor + 1));
	}
	return (0);
}

/**
 * is_prime_number - Find if number is a prime
 * Return: 1 if prime otherwise 0
 * @n: integer
 */

int is_prime_number(int n)
{
	if (n == 1 || n == -1)
	{
		return (0);
	}
	return (prime(n, 2));

}
