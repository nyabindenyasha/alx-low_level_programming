#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * in the string s, or NULL if the character is not found
 * @s: input string
 * @accept: characters to locate
 * Return: pointer to first occurrence of byte in accept
 *  or NULL if not found.
 */
char *_strpbrk(char *s, char *accept)
{
	int x, y;

	x = 0;
	while (s[x] != '\0')
	{
		y = 0;
		while (accept[y] != '\0')
		{
			if (s[x] == accept[y])
				return (&s[x]);
			y++;
		}
		x++;
	}

	return (0);
}
