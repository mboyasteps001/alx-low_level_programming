#include "lists.h"

/**
  *listint_len - Function that returns the lenght of the lenght
  *@h: Pointer to the nodes in the list
  *Return: the number of the nodes
  */

size_t listint_len(const listint_t *h)
{
	int counter;

	for (counter = 0; h != NULL; counter++)
	{
		h = h->next;
	}
	return (counter);
}
