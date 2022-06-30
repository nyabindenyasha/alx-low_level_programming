#include <stdio.h>
#include <stdlib.h>

/**
  * _realloc - Realloc the space of memory.
  * @ptr: Old array.
  * @old_size: Size of the first array.
  * @new_size: Size of the new array.
  * Return: New array.
  */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *tmp_arr;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		tmp_arr = malloc(new_size);
		if (tmp_arr == NULL)
			return (NULL);
		return (tmp_arr);
	}
	if ((new_size == 0) && (ptr != NULL))
	{
		free(ptr);
		return (NULL);
	}
	if (new_size > old_size)
	{
		tmp_arr = malloc(new_size);
		if (tmp_arr == NULL)
			return (NULL);
		for (i = 0; i < old_size; i++)
			((char *)tmp_arr)[i] = ((char *)ptr)[i];
		free(ptr);
		return (tmp_arr);
	}
	else
	{
		tmp_arr = malloc(new_size);
		if (tmp_arr == NULL)
			return (NULL);
		for (i = 0; i < new_size; i++)
		{
			((char *)tmp_arr)[i] = ((char *)ptr)[i];
		}
		free(ptr);
		return (tmp_arr);
	}
	return (NULL);
}
