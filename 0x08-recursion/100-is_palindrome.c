#include "main.h"
#include <stdio.h>
#include "2-strlen_recursion.c"

int _strlen_recursion(char *s);
int helper_palindrome(char *s, int len);

/**
 * is_palindrome - A fxn that checks if s is a palindrome string.
 * @s: An inpuit string
 * Return: 1 if is string is a palindrome or otherwise 0.
 */
int is_palindrome(char *s)
{
	int len;

	len = _strlen_recursion(s);
	if (len <= 1)
	{
		return (1);
	}
	return (helper_palindrome(s, len));
}

/**
 * helper_palindrome - A fxn that reveses a string.
 * @s: An input string
 * @len: the length of the string s
 * Return: reversed string
 */
int helper_palindrome(char *s, int len)
{
	if (len <= 1)
	{
		return (1);
	}
	else if (*s == *(s + len - 1))
	{
		return (helper_palindrome(s + 1, len - 2));
	}
	else
	{
		return (0);
	}
}
