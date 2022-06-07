#include "main.h"

/**
 * print_alphabet_x10 - check description
 * Description: function uses print_alphabet
 * to print the letter of the alphabet in lowercase 10 times
 * it calls print_alphabet 10 times
 * Return: Nothing.
 */

void print_alphabet_x10(void)
{
	char letter;
	int n;

	for (n = 0; n < 10; n++)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
			_putchar(letter);
		_putchar('\n');
	}
}
