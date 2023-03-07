#include "main.h"
/**
 * print_chessboard - Function that prints chessboard
 * @a: Array input
 * Return: Nothing
 */
void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 64; ++i)
	{
		if (i % 8 == 0 && i != 0)
		{
			j = i;
			_putchar('\n');
		}
		_putchar(a[i / 8][i - j]);
		++i;
	}
	_putchar('\n');
}
