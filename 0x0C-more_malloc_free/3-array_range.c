#include "main.h"

/**
 * array_range - Function that range array from min to max
 * @min: Minimum input
 * @max: Maximum input
 * Return: Array
 */

int *array_range(int min, int max)
{
	int *arr, i;

	if (min > max)
		return (NULL);

	arr = malloc((max - min + 1) * sizeof(int));
	if (arr == NULL)
		return (NULL);

	for (i = min; i <= max; i++)
		arr[i - min] = i;

	return (arr);
}
