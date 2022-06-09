#include "main.h"

/**
 * print_diagonal - print a diagonal line across the terminal
 * @n : number of \\ to be printed
 * Return:void
 */

void print_diagonal(int n)
{

	int i = 0, spaces;

	while (i < n && n > 0)
	{
		spaces = 0;
		while (spaces < i)
		{
			_putchar(' ');
			spaces++;
		}

		_putchar('\\');
		_putchar('\n');
		i++;
	}
	if (i == 0)
		_putchar('\n');

}
