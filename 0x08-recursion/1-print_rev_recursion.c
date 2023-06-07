#include "main.h"

/**
 * _print_rev_recursion - Function prints string in reverse recursively
 * @s: Pointer to string
 * Return: Nothing
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
	else
		_putchar('\n');
}
