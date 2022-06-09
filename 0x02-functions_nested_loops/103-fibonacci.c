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
	unsigned long total_sum = 2;

	for (i = 0; sum_of_two < 4000000; i++)
	{
		sum_of_two = first + second;
		if (sum_of_two % 2 == 0)
			total_sum += sum_of_two;
		first = second;
		second = sum_of_two;
	}
	printf("%ld\n", total_sum);

	return (0);
}
