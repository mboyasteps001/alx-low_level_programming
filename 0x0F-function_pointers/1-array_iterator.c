#include "function_pointers.h"

/**
  *array_iterator - Function that executes a function as a given parameter
  *@array:Function input
  *@size: The size of the array
  *@action: Pointer to function
  *Return: Nothing
  */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || size == 0 || action == NULL)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}
