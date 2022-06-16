#include "main.h"

/**
 * rot13 - convert string to ROT13 by encoding.
 * @s: input string
 *
 * Return: pointer to modified array
 */
char *rot13(char *s)
{
	char input[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rotated[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; input[j] != '\0'; j++)
		{
			if (s[i] == input[j])
			{
				s[i] = rotated[j];
				break;
			}
		}
	}
	return (s);
}
