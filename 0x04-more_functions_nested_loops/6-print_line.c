#include "main.h"

/**
 * print_line - function that print '_' when condition is met
 *
 * @n: function arguments
 */

void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}
	for (i = 0; i < n; ++n)
	{

		_putchar('_');
		_putchar('\n');
	}

}
