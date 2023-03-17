#include "main.h"

/**
 * malloc_checked - Function that allocates memory
 * @b:Integer to be allocaed a string
 * Return: Nothing
 */
void *malloc_checked(unsigned int b)
{
	void *p = malloc(b);

	if (p == NULL)
		exit(98);
	return (p);
}
