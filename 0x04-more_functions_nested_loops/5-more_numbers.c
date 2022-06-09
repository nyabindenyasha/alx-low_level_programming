#include "main.h"

/**
 * more_numbers - prints numbers 0-14 ten times
 * Return:void
 */

void more_numbers(void)
{
	char n, c;
	int i = 0;

	while (i < 10)
	{
		for (n = 0; n <= 14; n++)
		{
			c = n;
			if (n > 9)
			{
				_putchar('0' + n / 10);
				c = n % 10;
			}

			_putchar('0' + c);
		}

		_putchar('\n');
		i++;
	}
}
