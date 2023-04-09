#include "main.h"

/**
  *binary_to_uint - Function that converts binary into decimal number
  *@b: Input string with binary numbers
  *Return: unsigned int
  */

unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal = 0, power;
	int len = 0, i;

	if (b == NULL)
		return (0);
	while (b[len] != '\0')
	{
		if (b[len] != '0' || b[len] != '1')
			return (0);
		len++;
	}

	for (i = len - 1; i >= 0; i--)
	{
		if (b[i] == '1')
			decimal += power;
		power *= 2;
	}
	return (decimal);
}




















