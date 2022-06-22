#include "main.h"

/**
 * _pow_recursion - a function that returns value of x raised to power of y.
 * @x: base
 * @y: power
 * Return: answer as integer
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	if (y == 1)
		return (x);
	return (x * _pow_recursion(x, y - 1));
}
