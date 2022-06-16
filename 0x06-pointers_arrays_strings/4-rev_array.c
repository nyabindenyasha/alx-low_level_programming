#include "main.h"

/**
 * reverse_array - reverse an array of integers
 * @a: input array of integers
 * @n: length of input array
 *
 */
void reverse_array(int *a, int n)
{
	int x, temp_variable;

	x = 0;
	n = n - 1;

	while (x < n)
	{
		temp_variable = a[n];
		a[n] = a[x];
		a[x] = temp_variable;
		x++;
		n--;
	}
}
