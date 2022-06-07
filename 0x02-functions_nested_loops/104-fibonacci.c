#include <stdio.h>

/**
 * main - main block
 * Description: Find and print the first 98 fib numbers starting with 1 and 2.
 * Numbers should be coma and space separated.
 * Return: 0
 */

int main(void)
{
	int i;
	unsigned long first = 1;
	unsigned long second = 2;
	unsigned long sum_of_two = 3;

	printf("1, 2, ");
	for (i = 0; i < 96; i++)
	{
		sum_of_two = first + second;
		printf("%ld", sum_of_two);
		first = second;
		second = sum_of_two;

		if (i != 95)
			printf(", ");
	}
	printf("\n");

	return (0);
}
