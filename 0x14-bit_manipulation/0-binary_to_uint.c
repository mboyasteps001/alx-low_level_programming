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
	
	if (b == NULL)
		return (0);

	while(*b != '\0')
	{
		if (*b != '0' || *b != '1')
			return (0);
		else
		{
			decimal = decimal * 2 + (*b - '0');
			b++;
		}
	}
	return (decimal);
}




















