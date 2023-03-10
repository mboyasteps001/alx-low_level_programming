#include "main.h"
/**
 * _strchr - Function that checks the first character to appear
 * @s:The string input
 * @c:The character to be checked
 * Return: THe preceding character of the character
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (*s == c)
		return (s);
	return ('\0');
}
