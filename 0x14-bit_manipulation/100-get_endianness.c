#include "main.h"

/**
  *get_endianness - Function that check for endianness
  *Return: 0 if big endian or 1 for little endian
  */

int get_endianness(void)
{
	int i = 1;
	char *p = (char *) &i;

	if (p[0] == 1)
		return (1);
	else
		return (0);
}
