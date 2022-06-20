#include "main.h"

int is_accept(char c, char *accept);

/**
 * _strspn - gets the length of a prefix substring
 * @s: string to be checked
 * @accept: string containing the only accepted characters
 * Return: the number of bytes in the initial segment of s which consist
 * only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int length = 0;
	unsigned int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (is_accept(s[i], accept) > 0)
			length++;
		else
			break;
	}

	return (length);
}

/**
 * is_accept - checks if a given character is in the string accept
 * @c: character to be checked
 * @accept: string containing the only accepted characters
 * Return: 1 if c is in accept. Otherwise -1
 */
int is_accept(char c, char *accept)
{
	int i;

	for (i = 0; accept[i] != '\0'; i++)
	{
		if (c == accept[i])
			return (1);
	}

	return (-1);
}
