#include "main.h"

/**
 * _isalpha - check description
 * Description - checks if a character is a letter of the alphabet
 * @c : character to be checked
 * Return:0 or 1
 */

int _isalpha(int c)
{
	return ((c >= 97 && c <= 122) || (c >= 65 && c <= 90));

}
