#include "main.h"
#include <stdlib.h>

/**
 * str_concat - a function that concatenates two strings.
 * @s1: dest string to add to
 * @s2: src string to add dest string
 *
 * Return: pointer of new string or-else NULL
 */

char *str_concat(char *s1, char *s2)
{
	char *my_string;
	int size_s1 = 0;
	int size_s2 = 0;
	int i = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	i = 0;
	while (*(s1 + i))
	{
		size_s1++;
		i++;
	}

	i = 0;
	while (*(s2 + i))
	{
		size_s2++;
		i++;
	}

	size_s2++;
	my_string = malloc((size_s1 + size_s2) * sizeof(char));
	if (my_string == NULL)
		return (NULL);

	for (i = 0; i < size_s1; i++)
		my_string[i] = s1[i];

	for (i = 0; i < size_s2; i++)
		my_string[i + size_s1] = s2[i];

	return (my_string);
}
