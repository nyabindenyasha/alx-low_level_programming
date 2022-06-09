#include "main.h"

/**
 * print_triangle - prints a triangle of #.
 * @size : integer type
 * Return:void
 */

void print_triangle(int size)
{

	int i = 1, units;

	while (i <= size && size > 0)
	{
		units = 0;
		while (units < size - i)
		{
			_putchar(' ');
			units++;
		}
		units = 0;
		while (units < i)
		{
			_putchar('#');
			units++;
		}

		_putchar('\n');
		i++;
	}
	if (i == 1)
		_putchar('\n');
}
