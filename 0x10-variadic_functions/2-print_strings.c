#include "variadic_functions.h"

/**
 * print_strings - a function that prints strings, followed by a new line.
 * @separator: separator format.
 * @n: number of parameters.
 *
 * Return: void.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int x;
	char *p;

	va_start(valist, n);

	for (x = 0; x < n; x++)
	{
		p = va_arg(valist, char *);
		if (p == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", p);
		}

		if (x != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");

	va_end(valist);
}
