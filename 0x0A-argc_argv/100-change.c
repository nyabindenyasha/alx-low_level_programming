#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that prints the minimum number of coins to make change
 * for an amount of money.
 * @argc: arguments count
 * @argv: argument values
 *
 * Return: 0 if successful, 1 if errors
 */

int main(int argc, char *argv[])
{
	int change_needed, coins_needed, i, coins_found;
	int coins[5] = {25, 10, 5, 2, 1};

	coins_needed = 0;
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	change_needed = atoi(argv[1]);
	if (change_needed <= 0)
	{
		printf("0\n");
		return (1);
	}
	else
	{
		for (i = 0; i < 5; i++)
		{
			coins_found = change_needed / coins[i];
			change_needed -= coins_found * coins[i];
			coins_needed += coins_found;
			if (change_needed == 0)
				break;
		}
	}
	printf("%d\n", coins_needed);
	return (0);
}
