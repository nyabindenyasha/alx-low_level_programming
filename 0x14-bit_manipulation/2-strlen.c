#include "main.h"

/**
 * _strlen -  a function that returns the length of a string s.
 * @s: An input string
 * Return: Nothing
 */

int _strlen(const char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
