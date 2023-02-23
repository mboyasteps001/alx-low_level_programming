#include "main.h"

/**
 * _isupper - function that checks for the uppercase letter
 *
 * @c: Function input character input
 * Return: 1 is uppercase otherwise 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
