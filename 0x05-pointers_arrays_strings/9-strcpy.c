#include "main.h"

/**
 *_strcpy - function that copy string from buffer
 * @src: pointed buffer
 * @dest: destined buffer
 * Return: copied array
 */

char *_strcpy(char *dest, char *src)
{
	int i, j = 0;

	for (i = 0; src[i] != '\0'; ++i)
	{
		dest[j] = src[i];
		++j;
	}
	dest[j] = '\0';
	return (dest);
}
