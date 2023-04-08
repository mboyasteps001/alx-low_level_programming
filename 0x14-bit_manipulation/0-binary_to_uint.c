#include "main.h"

/**
  *binary_to_uint - Function that converts binary into decimal number
  *@b: Input string with binary numbers
  *Return: unsigned int
  */

unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal = 0, power;
	int b_len = 0;

	if (b == NULL)
		return (0);

	for (b_len = 0; b[b_len]; b_len++)
	{
		if (b[b_len] != '0' || b[b_len] != '1')
			return (0);
	}
	for (power = 1, b_len--, decimal = 0; b_len >= 0; power *= 2, b_len--)
	{
		if (b[b_len] == '1')
			decimal += power;
	}
	return (decimal);
}




















