#include "main.h"

/**
 * _strlen_recursion - Function return the lenght of the string
 * @s: Pointer to string
 * Return: Lenght of the string
 */

int _strlen_recursion(char *s)
{

	if (*s != '\0')
		return (_strlen_recursion(s + 1));
	else
		return 1;
}
