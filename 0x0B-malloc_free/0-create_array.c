#include "main.h"

/**
 * create_array - Function that creates an array of characters
 * @size: Size of aray in bytes
 * @c:Characters to be created to enter in an array
 * Return: Array of characters
 */

char *create_array(unsigned int size, char c)
{
	char *_array;
	unsigned int i;

	if (size == 0)
		return (NULL);
	_array = malloc(size * sizeof(char));
	if (_array == NULL)
		return (NULL);
	for (i = 0; i < size; ++i)
		_array[i] = c;
	return (_array);
}
