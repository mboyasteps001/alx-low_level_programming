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
	if (n > 98)
	{
		while (n < 98)
		{
			printf("%d, ", n);
			n++;
		}
	}
	else if (n > 98)
	{
		while (n > 98)
		{
			printf("%d, ", n);
			--n;
		}
	}
	printf("98\n");
}
