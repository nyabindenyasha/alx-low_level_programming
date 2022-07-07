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

	int i;

	for (i = 0; i < atoi(argv[1]); i++)
	{
		printf("%02hhx", *((char *)main + i));
		if (i < atoi(argv[1]) - 1)
			printf(" ");
		else
			printf("\n");
	}

	return (0);
}
