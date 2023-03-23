#include "main.h"

/**
 * _realloc - Function that reallocates memory
 * @ptr: Pointer to which memory previous located
 * @old_size: Old memory located
 * @new_size: New memory allocated
 * Return: Nothing
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	new_ptr = malloc(new_size);
	if (ptr == NULL)
		return (new_ptr);
	if (new_ptr == NULL)
		return (NULL);
	memcpy(new_ptr, ptr, (old_size < new_size) ? old_size : new_size);
	free(ptr);

	return (new_ptr);

}
