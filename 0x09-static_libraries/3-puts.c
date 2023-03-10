#include "main.h"

/**
 * _puts - function that prints the string
 *
 * @str: funstion arguments
 *
 * Return: nothing
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
