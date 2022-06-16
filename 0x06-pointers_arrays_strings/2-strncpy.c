#include "main.h"
/**
 * *_strncpy - function that copies n characters of the src sting into
 * the dest string.
 * @dest: pointer to the dest string
 * @src: pointer to the src string
 * @n: int, number of char to be copied
 * Return: destination string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	for (; i < n; i++)
	{
		dest[i] = '\0';
	}

	return (dest);
}
