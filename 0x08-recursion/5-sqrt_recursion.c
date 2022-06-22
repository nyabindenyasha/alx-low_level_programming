#include "main.h"

/**
 * check_square_root - check for square root of a
 * @a: number to square
 * @b: number to find square root
 *
 * Return: -1 if none or square root of b
 */

int check_square_root(int a, int b)
{
	if (a * a == b)
	{
		return (a);
	}
	if (a * a > b)
	{
		return (-1);
	}
	return (check_square_root(a + 1, b));
}

/**
 * _sqrt_recursion - a fxn that returns natural square root of a number.
 * @n: input number
 *
 * Return: if sqrt, return sqrt, else return -1
 */

int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (check_square_root(1, n));
}
