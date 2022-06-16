#include "main.h"

/**
 * string_toupper - convert a string to all uppercase
 * @str: input string
 *
 * Return: pointer to string
 */
char *string_toupper(char *str)
{
	int x;

	for (x = 0; str[x] != '\0'; x++)
	{
		if (str[x] >= 'a' && str[x] <= 'z')
			str[x] = str[x] - 32;
	}

	return (str);
}
