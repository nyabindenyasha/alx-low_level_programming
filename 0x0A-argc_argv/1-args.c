#include <stdio.h>

/**
 * main - a program that prints the number of arguments passed into it,
 * followed by a new line.
 * @argc: argument count
 * @argv: argument values
 *
 * Return: 0
 */

int main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%i\n", argc - 1);
	return (0);
}
