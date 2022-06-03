#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: Get a random number and check its last digit, compare it with 5
 * Return: 0
 */
int main(void)
{
	char letter_of_alphabet = 'a';

	while (letter_of_alphabet <= 'z')
	{
		putchar(letter_of_alphabet);
		letter_of_alphabet++;
	}

	putchar('\n');
	return (0);
}
