#include "lists.h"

/**
  *insert_nodeint_at_index - Function that insert node at specified position
  *@head: Starting point of the nodes
  *@idx: The index position to insert node
  *@n: The data to be inserted at specified position
  *Return: The list with insertd data in between
  */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new;
	listint_t *current;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	/*If index is 0 means node inserted at the beggining*/
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	current = *head;

	for (i = 0; current != NULL && i < idx - 1; i++)
	{
		current = current->next;
	}
	if (current == NULL)
	{
		free(new);
		return (NULL);
	}
	new->next = current->next;
	current->next = new;
	return (new);
}













