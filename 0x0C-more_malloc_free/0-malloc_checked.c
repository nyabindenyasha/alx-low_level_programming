#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - a function that allocates memory using malloc.
 * @b: size to be allocated
 * Return: pointer to allocated memory or exit with status 98
 **/

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
