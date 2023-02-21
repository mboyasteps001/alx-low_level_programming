#include "main.h"

/**
 * print_to_98 - function that print number to 98
 *
 * @n: function input
 *
 * Return: the list of numbers
 */

void print_to_98(int n)
{
	while (n <= 98)
	{
		printf("%d", n);
		if (n != 98)
			printf(", ");
		++n;
	}
	while (n > 98)
	{
		printf("%d", n);
		if (n != 98)
			printf(", ");
		--n;
	}
	printf("\n");
}
