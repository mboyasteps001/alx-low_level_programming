#include "main.h"


int real_sqrt(int n, int i);
/**
 * _sqrt_recursion - FUnction that calculate natural square root ofthe number
 * @n: Input number to be calculated
 * Return: Square root of the number
 *
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (real_sqrt(n, 0));

}

/**
 * real_sqrt - recursive call to find natural number
 * @n: Number to calculate sqr root
 * @i: Iterator
 * Return: Square root of the number
 */
int real_sqrt(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (real_sqrt(n, i + 1));
}
