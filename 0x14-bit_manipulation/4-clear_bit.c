#include "main.h"

/**
  *clear_bit - Function that sets the value of bit to 0 at certain index
  *@n: Numver input
  *@index: the position of the bit
  *Return: ! on success
  */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	/*create a mask by left shifting*/
	mask = 1UL << index;

	/*Sets bitwise AND  with bitwise negation*/
	*n &= ~mask;
	return (1);
}
