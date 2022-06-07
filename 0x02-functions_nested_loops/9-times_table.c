#include "main.h"

/**
 * times_table - check description
 * Description: It prints 9 times table starting with 0
 * Return: Nothing.
 */
void times_table(void)
{
	int row, j, value;

	for (row = 0; row <= 9; row++)
	{
		for (j = 0; j <= 9; j++)
		{
			value = row * j;

			if ((value / 10) == 0)
			{
				if (j != 0)
					_putchar(' ');
				_putchar(value + '0');

				if (j == 9)
					continue;
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar((value / 10) + '0');
				_putchar((value % 10) + '0');
				if (j == 9)
					continue;
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
