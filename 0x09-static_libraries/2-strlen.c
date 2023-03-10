#include "main.h"

/**
 * _strlen - function that returns the lenght of the string
 *
 * @s: function arguments
 *
 * Return: the counted value of the counted string
 */
int _strlen(char *s)
{
	int counter = 0;

	while (*s != '\0')
	{
		++counter;
		++s;
	}
	return (counter);
}
