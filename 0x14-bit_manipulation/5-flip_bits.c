#include "main.h"

/**
  *flip_bits - Function that flip certain bits to change a number
  *@n: The number to be changed
  *@m: The desired result
  *Return: The flipped number
  */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int bit_diff;
	unsigned int count;

	bit_diff = n ^ m;
	for (count = 0; bit_diff > 0;)
	{
		/*If least bit is set*/
		if (bit_diff & 1)
			count++;
		bit_diff >>= 1;
	}
	return (count);
}
