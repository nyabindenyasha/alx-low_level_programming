#include "main.h"
#include <stdlib.h>
// #include "1-memcpy.c"

/**
 * _memcpy - copy memory data from src to dest
 * @dest: memory destination
 * @src: memory source
 * @n: size of new memory
 */
void _memcpy(void *dest, void *src, size_t n)
{
	size_t i;
	char *csrc = (char *)src;
	char *cdest = (char *)dest;

	for (i = 0; i < n; i++)
		cdest[i] = csrc[i];
}

/**
 * *_realloc - reallocates a memory block using malloc and free
 * @ptr: array length
 * @old_size: size of old memory
 * @new_size: size of new memory
 * Return: pointer to new memory
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{

	void *new_ptr;

	if (new_size == 0)
	{
		if (ptr != NULL)
			free(ptr);
		return (NULL);
	}
	else if (!ptr)
	{
		return (malloc(new_size));
	}
	else if (new_size <= old_size)
	{
		return (ptr);
	}
	else
	{
		new_ptr = malloc(new_size);
		if (new_ptr)
		{
			_memcpy(new_ptr, ptr, old_size);
			free(ptr);
		}
		return (new_ptr);
	}

	return (0);
}
