#include <stdio.h>
#include <math.h>

/**
 * main - print the largest prime factor of 612852475143.
 * Return: Always 0.
 */

int main(void)
{

	unsigned long maximum_prime, i;

	unsigned long number = 612852475143;

	while (number % 2 == 0)
	{
		number = number / 2;
	}
	for (i = 3; i < sqrt(number); i += 2)
	{
		while (number % i == 0)
		{
			maximum_prime = i;
			number = number / i;
		}
	}

	if (number > 2)
		maximum_prime = number;
	else
		maximum_prime = 2;

	printf("%lu\n", maximum_prime);

	return (0);
}
