#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;
	unsigned long first = 1;
	unsigned long second = 2;
	unsigned long sum_of_two = 3;

	printf("1, 2, ");
	for (i = 0; i < 48; i++)
	{
		sum_of_two = first + second;
		printf("%ld", sum_of_two);
		first = second;
		second = sum_of_two;

		if (i != 47)
			printf(", ");
	}
	printf("\n");

	return (0);
}
