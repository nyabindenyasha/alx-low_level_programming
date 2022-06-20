#include "main.h"
#include <stdio.h>
/**
 * *_strstr - a function that locates a substring.
 * @haystack: substring to search.
 * @needle: string to be searched.
 * Return: a pointer to the beginning of the located substring,
 *  or NULL if the substring is not found.
 */

char *_strstr(char *haystack, char *needle)
{
	int x, y;

	for (x = 0; haystack[x] > '\0'; x++)
	{
		for (y = x; haystack[y] > '\0' && needle[y - x] > '\0'; y++)
		{
			if (haystack[y] != needle[y - x])
			{
				break;
			}
		}
		if (needle[y - x] == '\0')
		{
			return (haystack + x);
		}
	}
	return (0);
}
