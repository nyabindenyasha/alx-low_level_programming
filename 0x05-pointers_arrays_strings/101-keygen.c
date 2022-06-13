#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - random password generator for 101-crackme
 *
 * Return: always 0
 */
int main(void)
{
	int a, b, i, j;
	char c[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char p[58];

	srand(time(NULL));
	while (j != 2772)
	{
		a = i = j = 0;
		while ((2772 - 122) > j)
		{
			b = rand() % 62;
			p[a] = c[b];
			j += c[b];
			a++;
		}
		while (c[i])
		{
			if (c[i] == (2772 - j))
			{
				p[a] = c[i];
				j += c[i];
				a++;
				break;
			}
			i++;
		}
	}
	p[a] = '\0';
	printf("%s", p);
	return (0);
}
