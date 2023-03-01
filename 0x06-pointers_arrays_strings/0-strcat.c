#include "main.h"

/**
 * _strcat - function that concatenate strings
 * @dest:first function argument
 * @src:second function argument
 * Return: The string
 */

char *_strcat(char *dest, char *src)
{
	while (*dest)
		dest++;
	while (*src)
	{
		*dest = *src;
		++dest;
		++src;
	}
	*dest = '\0';
	return (dest);
}
