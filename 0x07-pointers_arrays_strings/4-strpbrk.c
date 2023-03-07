#include "main.h"
/**
 * _strpbrk - Function that searches a string for any set of byte
 * @s:Input string
 * @accept: Input string to be dertemined
 * Return:The searched string
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; ++i)
	{
		for (j = 0; accept[j] != '\0'; ++j)
		{
			if (s[i] == accept[j])
				return (s + i);
		}
	}
	return ('\0');
}
