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
	char i;
	int j;

	for (j = 0; j < 10; j++)
	{
		print_alphabet();
	}
}
