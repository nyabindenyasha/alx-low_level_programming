#include "main.h"

/**
 * _prime_check -  a function that checks if b is prime.
 * @a: factor to check
 * @b: number to check if prime
 *
 * Return: 1 if prime or 0 if not
 */

int _prime_check(int a, int b)
{
	if (b < 2 || b % a == 0)
	{
		return (0);
	}
	else if (a > b / 2)
	{
		return (1);
	}
	else
	{
		return (_prime_check(a + 1, b));
	}
}

/**
 * is_prime_number -  a function that returns 1 if the input integer is a
 * prime number, otherwise return 0.
 * @n: input number
 *
 * Return: 1 if prime number, 0 if not
 */

int _prime_check(int a, int b);
int is_prime_number(int n)
{
	if (n == 2)
		return (1);
	return (_prime_check(2, n));
}
