#include <stdlib.h>

/**
 * array_range - a function that creates an array of integers.
 * @min: minimum value of array.
 * @max: maximum value of array.
 *
 * Return: The array.
 */
int *array_range(int min, int max)
{
	int *tmp_array, size_array = (max - min) + 1, i;

	if (min > max)
	{
		return (NULL);
	}

	tmp_array = malloc(sizeof(int) * ((max - min) + 1));

	if (tmp_array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size_array; i++)
	{
		tmp_array[i] =  min;
		min++;
	}

	return (tmp_array);
}
