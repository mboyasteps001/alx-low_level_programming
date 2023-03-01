#include "main.h"

/**
 * _strcat - function that concatenate strings
 * @dest:first function argument
 * @src:second function argument
 * Return: The string
 */

char *_strcat(char *dest, char *src)
{
	int c = 0, cc = 0;
	while (dest[c])
		c++;
	while (src[cc])
	{
		dest[c] = src[cc];
		++cc;
	}
	*dest = '\0';
	return (dest);
}
