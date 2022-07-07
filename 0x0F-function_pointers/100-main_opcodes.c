#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that prints the opcodes of its own main function.
 * @argc: Arguments list.
 * @argv: Arguments values.
 * Return: Integer.
 */

int main(int argc, char *argv[])
{

	unsigned char *func_ptr;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	if (atoi(argv[1]) < 0)
	{
		printf("Error\n");
		exit(2);
	}
	func_ptr = (unsigned char *)main;

	int x = 0;

	if (atoi(argv[1]) > 0)
	{
		while (x < (atoi(argv[1]) - 1))
			printf("%02hhx ", func_ptr[x++]);
		printf("%hhx\n", func_ptr[x]);
	}
	return (0);
}
