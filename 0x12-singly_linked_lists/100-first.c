#include <stdio.h>

void myfunction(void) __attribute__ ((constructor));

/**
  * myfunction - a function that prints a string before the main.
  * Return: void.
  */

void myfunction(void)
{
	char *str1, *str2;

	str1 = "You're beat! and yet, you must allow,\n";
	str2 = "I bore my house upon my back!\n";
	printf("%s%s", str1, str2);
}
