#include "main.h"

/**
  *binary_to_uint - Function that converts binary into decimal number
  *@b: Input string with binary numbers
  *Return: unsigned int
  */

unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal = 0;
	int i;

	if (b == NULL)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' || b[i] != '1')
			return (0);
	}
	for (i = 0; b[i] != '\0'; i++)
	{
		decimal = decimal * 2 + (b[i] - '0');
	}
	return (decimal);
}




















