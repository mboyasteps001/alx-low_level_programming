#include "lists.h"

/**
  *print_listint - Function that prints number of nodes in the list
  *@h: Pointer to the nodes in the list
  *Return: Number of nodes
  */

size_t print_listint(const listint_t *h)
{
	int counter;

	for (counter = 0; h != NULL; counter++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (counter);
}
