#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that multiplies 2 numbers
 * @argc: argument count
 * @argv: argument values
 *
 * Return: 0 is successul, 1 if unsuccessful
 */
int main(int argc, char *argv[])
{
	if (argc <= 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		int result = atoi(argv[1]) * atoi(argv[2]);

		printf("%i\n", result);
		return (0);
	}
}
