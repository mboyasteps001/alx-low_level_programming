#include "main.h"

/**
 * print_diagonal - function that print \ nth times
 *
 * @n: function input that enter no of times print the diagonal
 */

void print_diagonal(int n)
{
	int i, space;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (i = 0; i < n; i++)
		{
			for (space = 0; space < i; ++space)
				_putchar(' ');
			_putchar(92);	/*ascii value for backlash*/
			_putchar('\n');
		}
	}
}
