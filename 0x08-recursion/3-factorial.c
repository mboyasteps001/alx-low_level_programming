#include "main.h"

/**
 * factorial - Function that returns the factorial of the given input
 * @n: Input number
 * Return: THe factorial or respective return type on fail
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
