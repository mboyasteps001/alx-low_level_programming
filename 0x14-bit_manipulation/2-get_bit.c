#include "main.h"

/**
  *get_bit - Function that returns the bit to the specified position
  *@n: Input number
  *@index: The position in which the bit has to be printed
  *Return: The bit position
  */

int get_bit(unsigned long int n, unsigned int index)
{
	int bit_value;
	unsigned long int shifted;

	shifted = n >> index;
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	bit_value = shifted & 1;
	return (bit_value);

}
