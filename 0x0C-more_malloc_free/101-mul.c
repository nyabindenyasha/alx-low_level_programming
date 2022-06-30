#include "main.h"
#include <stdlib.h>
#include "3-puts.c"
#include "100-atoi.c"

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
