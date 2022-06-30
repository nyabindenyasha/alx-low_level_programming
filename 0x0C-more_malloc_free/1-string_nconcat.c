#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat -  a function that concatenates two strings.
 * Description - Concat one string and n bytes of the second string.
 * @s1: first string.
 * @s2: second string.
 * @n: Number of bytes.
 *
 * Return: Strings concated.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *tmp_string;
	unsigned int i, j;
	unsigned int count1, count2;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	count1 = _strlen(s1);
	count2 = _strlen(s2);

	if (n >= count2)
	{
		n = count2;
	}
	tmp_string = malloc((sizeof(char) * count1) + (sizeof(char) * n) + 1);
	if (tmp_string != NULL)
	{
		for (i = 0; i < count1; i++)
		{
			tmp_string[i] = s1[i];
		}
		for (j = 0; j < n; j++)
		{
			tmp_string[i] = s2[j];
			i++;
		}
		tmp_string[i] = '\0';
		return (tmp_string);
	}
	else
	{
		return (NULL);
	}
}
