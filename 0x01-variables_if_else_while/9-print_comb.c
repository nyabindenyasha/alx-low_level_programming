#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: prints all single digit numbers of base 10
 * starting from 0, followed by a new line.
 * Return: 0
 */
int main(void)
{
	int digits = 0;

	while (digits < 10)
	{
		putchar(48 + digits);
		if (digits != 9)
		{
			putchar(',');
			putchar(' ');
		}
		digits++;
	}
	putchar('\n');
	return (0);
}
