#include "main.h"

/**
 * print_line - function that print '_' when condition is met
 *
 * @n: function arguments
 */

void print_line(int n)
{
	int i;

	for (i = 0; i < n; ++n)
	{
		if (n <= 0)
		{
			_putchar('\n');
			break;
		}
		else
			_putchar('_');
	}
	_putchar('\n');
}
