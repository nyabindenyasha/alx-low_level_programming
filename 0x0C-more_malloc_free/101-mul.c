#include "main.h"

/**
 * _atoi - convert a string to an integer.
 * @s: char type string
 * Return: integer converted
 */

int _atoi(const char *s)
{
	int sign = 1;
	unsigned long int result = 0, first_num, i;

	for (first_num = 0; !(s[first_num] >= 48 && s[first_num] <= 57); first_num++)
	{
		if (s[first_num] == '-')
		{
			sign *= -1;
		}
	}

	for (i = first_num; s[i] >= 48 && s[i] <= 57; i++)
	{
		result *= 10;
		result += (s[i] - 48);
	}

	return (sign * result);
}

/**
 * print_int - prints an integer.
 * @n: int
 * Return: 0
 */

void print_int(unsigned long int n)
{

	unsigned long int divisor = 1, i, result;

	for (i = 0; n / divisor > 9; i++, divisor *= 10){
		;
	}

	for (; divisor >= 1; n %= divisor, divisor /= 10)
	{
		result = n / divisor;
		_putchar('0' + result);
	}
}

/**
 * main - print the result of the multiplication, followed by a new line
 * @argc: int
 * @argv: list
 * Return: 0
 */

int main(int argc, char const *argv[])
{
	(void)argc;

	if (argc != 3)
	{
		_puts("Error ");
		exit(98);
	}
	print_int(_atoi(argv[1]) * _atoi(argv[2]));
	_putchar('\n');

	return (0);
}
