#include "main.h"

/**
  *_strlen - Funciton that dertemine the lenght of the string
  *@str: Pointer to the string to be vonverted
  *Return: Number of string
  */

unsigned int _strlen(const char *str)
{
	unsigned int i;

	for (i = 0; str[i] != '\0'; i++)
		;
	return (i);
}

/**
  *_atoi - Function that converts the string into integer
  *@c: Pointer to string to be converted
  *Return: Unsigned int
  */

unsigned int _atoi(const char c)
{
	return ((unsigned int)(c - '0'));

}

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
		decimal <<= 1;
		if (b[i] == '1')
			decimal += 1;
	}
	return (decimal);
}




















