#include "main.h"

/**
 * string_toupper - function that convert string into uppercase
 *@str:input string
 * Return: Upercase string
 */
char *string_toupper(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
		i++;
	}
	return (str);
}
