#include "main.h"
#include <stdlib.h>

/**
 * create_array - a function that creates an array of chars, and initializes
 * it with a specific char.
 * @size: length of the array
 * @c: character to populate the array
 *
 * Return: pointer to array, otherwise NULL
 */

char *create_array(unsigned int size, char c)
{
	char *my_array;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	my_array = malloc(size * sizeof(char));

	if (my_array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		my_array[i] = c;
	}

	return (my_array);
}
