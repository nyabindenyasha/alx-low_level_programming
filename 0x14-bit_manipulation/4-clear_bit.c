#include "main.h"

/**
  * clear_bit - a function that sets the value of a bit to 0 at a given index.
  * @n: Decimal number.
  * @index: Index.
  * Return: 1 if work, -1 if doesn't.
  */

int clear_bit(unsigned long int *n, unsigned int index)
{
	  if (index >= 64){
		   return (-1);
    }

   	*n &= ~(1 << index);
	  return (1);
}
