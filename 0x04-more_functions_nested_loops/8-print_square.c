#include "main.h"

/**
 * print_size - function that prints aquare
 *
 * @size: size if the square
 */

void print_size(int size)
{
	int row, column;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (row = 0; row < size; ++row)
		{
			for (column = 0; column < size; ++column)
				_putchar('#');
		}
		_putchar('\n');
	}
}
