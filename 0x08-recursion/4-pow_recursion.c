#include "main.h"

/**
 * _pow_recursion - Function that returns the pow of the number
 * @x: The first input argument
 * @y: the number in which x is raised
 * Return: The power of the number
 */

int _pow_recursion(int x, int y)
{
	int result = x;

	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	result *= _pow_recursion(x, y - 1);
	return (result);
}
