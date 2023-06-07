#include "main.h"

/**
 * _pow_recursion - FUnction that returns the power of the number
 * @x: Interger input
 * @y: Integer that indicates the pwer of the number
 * Return: Power of the number
 */

int _pow_recursion(int x, int y)
{
	int answer = x;

	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	answer *= _pow_recursion(x, y - 1);
	return (answer);

}
