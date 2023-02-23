#include "main.h"

/**
 * print_line - function that print \ nth times
 *
 * @n: function input that enter no of times print the diagonal
 */

void print_diagonal(int n)
{
	int i, space;

	for (i = 0; i < n; i++)
	{
		if (n <= 0)
		{
			_putchar('\n');
			break;
		}
		else
		{
			for (space = 0; space < i; ++space)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}
}
