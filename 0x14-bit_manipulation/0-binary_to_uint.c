#include "main.h"
#include "2-strlen.c"

/**
 * binary_to_uint - a function that converts a binary number to an unsigned
 * int.
 * @b: Binary number.
 * Return: Number converted, or 0 if is no specified.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int sum = 0, i = 0;
	int length;

	if (b == NULL)
	{
		return (0);
	}

	length = _strlen(b) - 1;

	while (b[length])
	{
		if (b[length] == '0')
		{
			sum += (0 << i);
		}
		else if (b[length] == '1')
		{
			sum += (1 << i);
		}
		else
		{
			return (0);
		}
		length--;
		i++;
	}
	return (sum);
}
