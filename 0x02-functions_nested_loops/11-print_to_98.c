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
	int c;

	if (n > 98)
		for (c = n; n > 98; n--)
			printf("%d", n);
	else
		for (c = n; c < 98; n++)
			printf("%d", n);
	printf("98\n");
}
