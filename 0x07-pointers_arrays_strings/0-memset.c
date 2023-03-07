#include "main.h"
/**
 * _memset - function that fills the empty memory area with
 *	constant character
 * @s: Pointer which shows pointer to area to fill
 * @b:Character shows the character to fill
 * @n: Shows the number of bytes to fill
 * Return: Pointer to be filled the memory area
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
