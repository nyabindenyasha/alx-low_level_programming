#include "main.h"

/**
 * is_prime_number -  a function that returns 1 if the input integer is a
 * prime number, otherwise return 0.
 * @n: input number
 * Return: 1 if prime number, 0 if not
 */

int is_prime_number(int n)
{
	if (n == 2)
		return (1);
	return (_prime_check(2, n));
}

/**
 * _prime_check -  a function that returns 1 if the input integer is a prime
 * number, otherwise return 0.
 * @x: factor to check
 * @y: number to check if prime
 * Return: 1 if prime or 0 if not
 */

int _prime_check(int x, int y)
{
	if (y < 2 || y % x == 0)
	{
		return (0);
	}
	else if (x > y / 2)
	{
		return (1);
	}
	else
	{
		return (_prime_check(x + 1, y));
	}
}
