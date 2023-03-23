#include<stdio.h>
#include "function_pointers.h"

/**
  *int_index - Function which finds the matching number in functions
  *
  *@array: Array input
  *@size: The size of the array
  *@cmp: Pointer to function that compares the values
  *Return: Index of the first element
  */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);

	if (array == NULL || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i] != 0))
			return (i);
	}
	return (-1);
}
