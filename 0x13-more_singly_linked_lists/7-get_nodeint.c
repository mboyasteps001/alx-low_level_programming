#include "lists.h"

/**
  *get_nodeint_at_index - Function that gets the node at nth position
  *@head: The beggining of the list
  *@index: The position of the node to be dertemined
  *Return: The position of the node
  */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current;
	unsigned int i;

	current = head;

	for (i = 0; current != NULL && i < index; i++)
	{
		current = current->next;
	}
	if (current == NULL)
		return (NULL);
	return (current);
}
