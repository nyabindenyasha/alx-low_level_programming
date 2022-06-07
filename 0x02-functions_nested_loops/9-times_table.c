#include "main.h"

/**
 * Description: It prints 9 times table starting with 0
 * Return: Nothing.
 */
void times_table(void)
{
		for (int row = 0; row < 10; row++)
	{
		for (int j = 0; j < 10; j++)
		{
			int value = 0;
			value = j * row;
			if (value > 10)
			{
				_putchar((value / 10) + '0');
				_putchar((value % 10) + '0');
			}
			else
			{
				_putchar(value + '0');
			}
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
}