#include "main.h"
/**
 * _strstr - Function that locates substring
 * @haystack:String input
 * @needle: String to be searched
 * Return: needle searched string
 */
char *_strstr(char *haystack, char *needle)
{
	/*Helping variables*/
	char *h, *n;

	for (; *haystack != '\0'; haystack++)
	{
		h = haystack;
		n = needle;
		for (; *n != '\0' && *haystack == *n; ++n)
		{
			haystack++;
		}
		if (!*n)
			return (h);
	}
	return ('\0');
}
