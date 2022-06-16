#include "main.h"
/**
 * *_strcat - concatenates two strings src and dest
 * @dest: destination string
 * @src: source string
 * Return: void
 */

char *_strcat(char *dest, char *src)
{
	int a = -1, dest_length = 0, src_length = 0;

	while (dest[dest_length] != '\0')
		dest_length++;

	while (dest[src_length] != '\0')
		src_length++;

	for (int i = dest_length; i < dest_length + src_length; i++)
		dest[i] = src[i - src_length];

	return (dest);
}
