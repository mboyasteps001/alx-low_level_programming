#include "main.h"
#include<string.h>

/**
 * _strncpy - Function that copies string and paste to other buffer
 * @dest: First function argument
 * @src:Second function argument
 * @n: Interger input argument
 * Return: Copied string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; ++i)
		dest[i] = '\0';
	return (dest);
}
