#include "main.h"
#include <stdio.h>

/**
 * print_diagsums -  a function that prints the sum of the two diagonals
 * of a square matrix of integers.
 * @a: 2d array of int types
 * @size: size of array (square)
 */

void print_diagsums(int *a, int size)
{
	int i, first_sum = 0, second_sum = 0;

	for (i = 0; i < size; i++)
	{
		first_sum += a[i];
		second_sum += a[size - i - 1];
		a += size;
	}
	printf("%d, ", first_sum);
	printf("%d\n", second_sum);
}
