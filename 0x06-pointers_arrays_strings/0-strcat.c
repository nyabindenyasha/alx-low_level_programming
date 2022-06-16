#include "main.h"
/**
 * *_strcat - concatenates two strings src and dest
 * @dest: destination string
 * @src: source string
 * Return: void
 */

char *_strcat(char *dest, char *src)
{
int a = -1, dest_length;
for (dest_length = 0; dest[dest_length] != '\0'; dest_length++)
;

do {
	a++;
	dest[dest_length] = src[a];
	dest_length++;
} while (src[a] != '\0');

return (dest);
}
