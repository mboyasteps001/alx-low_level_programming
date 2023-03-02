#include "main.h"

/**
 * reverse_array - Function that reverse string
 * @a:pointer argument
 * @n:number of element
 * Return: Nothing
 */

void reverse_array(int *a, int n)
{
	int i, temp;

	for (i = 0; i < n / 2; ++i)
	{
		temp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = temp;
	}
}
