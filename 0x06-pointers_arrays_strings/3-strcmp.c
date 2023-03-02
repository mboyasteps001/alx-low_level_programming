#include "main.h"

/**
 * _strcmp - Function that compares the two input string
 * @s1:FUnction argument
 * @s2:Sencond function argument
 * Return: bytes more in compared strings
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int str_len;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			str_len = s1[i] - s2[i];
			return (str_len);
		}
		i++;
	}
	if (s1[i] == '\0' && s2[i] == '\0')
		return (0);
	else if (s1[i] == '\0')
		return (-1);
	else
		return (1);
}
