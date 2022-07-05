#include "dog.h"
#include <stdio.h>

/**
 * _strcpy - a function that makes a copy of a string
 * @dest: address of buffer to copy string to
 * @src: address of string to be copied
 *
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	char *start = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';
	return (start);
}
