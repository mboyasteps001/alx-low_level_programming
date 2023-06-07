#include "main.h"

/**
 * _puts_recursion - Function prints string in stdout as puts
 * @s: Pointer to string
 * Return: Nothing
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\0');
}
