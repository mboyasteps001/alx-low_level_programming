#include "main.h"
/**
 * print_diagsum - Function that print sum of diagonal
 * @a:Input pointers
 * @size: The size of the matrix
 * Return:Nothing
 */
void print_diagsum(int *a, int size)
{
	int i, n, m;

	n = 0;
	m = 0;
	for (i = 0; i < (size * size); ++i)
	{
		if (i % (size + 1) == 0)
			n += a[i];
		if (i % (size - 1) == 0 && i != 0 && i < size * size - 1)
			m += a[i];
	}
	printf("%d, %d\n", n, m);
}
