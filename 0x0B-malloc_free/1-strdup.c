#include "main.h"
#include <stdlib.h>

/**
 * _strdup - a function that returns a pointer to a newly allocated space in
 * memory, which contains a copy of the string given as a parameter.
 * @str: input string to be copied
 *
 * Return: pointer to the new copied string, otherwise NULL
 */

char *_strdup(char *str)
{
	char *my_string;
	int size = 0;
	int i = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	i = 0;

	while (*(str + i))
	{
		size++;
		i++;
	}

	size++;
	my_string = malloc(size * sizeof(char));
	if (my_string == NULL)
	{
		return (NULL);
	}

	i = 0;
	while (*(str + i))
	{
		*(my_string + i) = *(str + i);
		i++;
	}

	my_string[i] = '\0';

	return (my_string);
}
