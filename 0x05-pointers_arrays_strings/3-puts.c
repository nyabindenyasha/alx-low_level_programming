#include "main.h"

/**
 * _puts - Write a function that prints a string, followed by a new line,
 * to stdout.
 * @str: an input string
 * Return: Nothing
 */
void _puts(char *str)
{
	int n = 0;

	while (str[n] != '\0')
	{
		_putchar(str[n]);
		n++;
	}
	_putchar('\n');
}
