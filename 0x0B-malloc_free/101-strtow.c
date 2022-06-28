#include "main.h"
#include <stdlib.h>

/**
 * strtow - A function that splits a string into words
 * @str: An input pointer of the string to split
 * Return: a pointer to an array of strings or-else NULL
 */

char **strtow(char *str)
{
	char **array;
	int i, j, k, l, length, count = 0;

	if (str == NULL || *str == '\0')
		return (NULL);

	for (; str[i]; i++)
	{
		if ((str[i] != ' ' || *str != '\t') &&
			((str[i + 1] == ' ' || str[i + 1] == '\t') || str[i + 1] == '\n'))
			count++;
	}
	if (count == 0)
		return (NULL);
	array = malloc(sizeof(char *) * (count + 1));
	if (array == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0' && k < count; i++)
	{
		if (str[i] != ' ' || str[i] != '\t')
		{
			length = 0;
			j = i;
			while ((str[j] != ' ' || str[j] != '\t') && str[j] != '\0')
				j++, length++;
			array[k] = malloc((length + 1) * sizeof(char));
			if (array[k] == NULL)
			{
				for (k = k - 1; k >= 0; k++)
					free(array[k]);
				free(array);
				return (NULL);
			}
			for (l = 0; l < length; l++, i++)
				array[k][l] = str[i];
			array[k++][l] = '\0';
		}
	}
	array[k] = NULL;
	return (array);
}
