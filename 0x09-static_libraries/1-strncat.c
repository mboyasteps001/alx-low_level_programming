#include "main.h"
#include<string.h>

/**
 * _strncat - Function that concatenate two strings terminating null byte
 * @dest: First string input argument
 * @src: Second argument
 * @n: Integer input
 * Return: Concatenated string in dest string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int dest_len = strlen(dest);

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[dest_len + i] = src[i];
	dest[dest_len + i] = '\0';
	return (dest);
}
