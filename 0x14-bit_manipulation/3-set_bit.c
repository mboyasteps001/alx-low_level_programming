#include "main.h"

/**
  *set_bit - Function that set a certain value of bit to a given index
  *@n: Number input
  *@index: position of to set the bit
  *Return: Number with new set bit
  */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	mask = 1UL << index;
	*n |= mask;
	return (1);
}
