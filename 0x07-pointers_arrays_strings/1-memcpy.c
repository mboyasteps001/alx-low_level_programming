#include "main.h"
/**
 * _memcpy - Function that copy memory area of n bytes
 * @dest:Buffer to copy to..
 * @src:Buffer where memory is copied
 * @n:Number of bytes to copy
 * Return: THe copied memory of n bytes
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
