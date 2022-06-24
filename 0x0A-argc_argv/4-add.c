#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * is_digit - checks if a string is a valid digit.
 * @s: string input
 *
 * Return: 1 is s is a valid integer. 0 otherwise
 */
int is_digit(char *s)
{
	while (*s)
	{
		if (*s < '0' || *s > '9')
		{
			return (0);
		}
		s++;
	}

	return (1);
}

/**
 * main - program that adds positive numbers
 * @argc: argument count
 * @argv: argument values
 *
 * Return: 0 if successful, 1 if Error occurs
 */

int main(int argc, char **argv)
{
	int i;
	int total = 0;

	if (argc < 2)
	{
		printf("%d\n", 0);
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		if (!is_digit(argv[i]))
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			total += atoi(argv[i]);
		}
	}

	printf("%d\n", total);

	return (0);
}
