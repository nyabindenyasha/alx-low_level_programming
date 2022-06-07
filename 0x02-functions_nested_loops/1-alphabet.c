#include "main.h"

/**
 * Description: It prints the letters of the alphabet in lowercase followed by
 * a new line
 * Return: Nothing.
 */
void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);
	_putchar('\n');
}
