#include "main.h"

/**
 * factorial - Function that returns the factorial of the number
 * @n: Input number parameter
 * Return: Factorial of the number
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
