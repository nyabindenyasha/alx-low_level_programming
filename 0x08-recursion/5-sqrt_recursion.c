#include "main.h"

/**
 * _sqrt_recursion - a function that returns the natural square root of
 * a number.
 * Description: a function that returns the natural square root of
 * a number.
 * @n: input number
 * 
 * Return: if sqrt, return sqrt, else return -1
 */

int check_square_root(int a, int b);
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (check_square_root(1, n));
}

/**
 * check_square_root - check if a number has a square root.
 * Description: - check if a number has a square root.
 * @a: number to square
 * 
 * @b: number to find square root of
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
