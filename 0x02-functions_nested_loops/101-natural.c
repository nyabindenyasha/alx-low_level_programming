#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int number, sum = 0;

	for (number = 0; number < 1024; number++)
	{
		if ((number % 5) == 0 || (number % 3) == 0)
			sum += number;
	}
	printf("%d", sum);
	printf("\n");

	return (0);
}
