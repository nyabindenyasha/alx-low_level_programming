#include <unistd.h>

/**
 * _putchar - writes the character c to the standard output stream (stdout).
 * @c: The character to be printed.
 *
 * Returns 1 on success.
 * On error, -1 is returned.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
