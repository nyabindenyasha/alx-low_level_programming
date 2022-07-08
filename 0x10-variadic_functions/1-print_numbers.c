#include "variadic_functions.h"

/**
 * print_numbers -  a function that prints numbers, followed by a new line.
 * @separator: separator format.
 * @n: number of parameters.
 *
 * Return: void.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int x;

	va_start(valist, n);

	for (x = 0; x < n; x++)
	{
		printf("%d", va_arg(valist, int));

		if ((x != (n - 1)) && (separator != NULL))
		{
			printf("%s", separator);
		}
	}
	printf("\n");

	va_end(valist);
}
