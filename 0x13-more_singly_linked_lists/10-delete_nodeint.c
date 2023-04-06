#include "lists.h"

/**
  *delete_nodeint_at_index - Function that deletes node at index
  *@head: Starting point
  *@index: Index of the node to be deleted
  *Return: 1 on succes and -1 on failure
  */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *pre;
	unsigned int i;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		current = *head;
		*head = (*head)->next;
		free(current);
		return (1);
	}
	pre = *head;
	current = (*head)->next;
	for (i = 1; i < index; i++)
	{
		if (current == NULL)
			return (-1);
		pre = current;
		current = current->next;
	}
	if (current == NULL)
		return (-1);
	pre->next = current->next;
	free(current);
	return (1);
}











