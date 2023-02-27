#include "main.h"

/**
 * swap_int - function that swaps the values of two integers
 *
 * @a: First enterd argument
 * @b: Second arguments
 * Return: nothing
 */

void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
