#include "main.h"

/**
 * print_square - prints a square
 * @n : units of the square
 * Return:void
 */

void print_square(int n)
{

	int i = 0, units;

	while (i < n && n > 0)
	{
		units = 0;
		while (units < n)
		{
			_putchar('#');
			units++;
		}

		_putchar('\n');
		i++;
	}
	if (i == 0)
		_putchar('\n');

}
