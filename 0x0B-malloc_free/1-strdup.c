#include "main.h"

/**
 * _strdup - Function that duplicates a string
 * @str: Input string
 * Return: Duplicated string
 */

char *_strdup(char *str)
{
	char *new_str;

	if (str == NULL)
		return (NULL);
	new_str = malloc(strlen(str) + 1);
	if (new_str == NULL)
		return (NULL);

	strcpy(new_str, str);
	return (new_str);
}
