#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_all -  a function that prints anything (any arguement).
 * @format: Format of the arguments.
 * Return: void.
 */
void print_all(const char *const format, ...)
{
	va_list valist;
	unsigned int x = 0;

	va_start(valist, format);
	while (format == NULL)
	{
		printf("\n");
		return;
	}
	while (format[x])
	{
		char *tmp_arg;

		switch (format[x])
		{
		case 'c':
			printf("%c", va_arg(valist, int));
			break;
		case 'i':
			printf("%i", va_arg(valist, int));
			break;
		case 'f':
			printf("%f", va_arg(valist, double));
			break;
		case 's':
			tmp_arg = va_arg(valist, char *);
			if (tmp_arg == NULL)
				tmp_arg = "(nil)";
			printf("%s", tmp_arg);
			break;
		}
		if ((format[x] == 'c' || format[x] == 'i' || format[x] == 's' ||
			 format[x] == 'f') && (format[x + 1] != '\0'))
			printf(", ");
		x++;
	}
	printf("\n");
	va_end(valist);
}
