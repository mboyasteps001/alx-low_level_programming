#include "lists.h"

/**
  *add_nodeint - Function that adds node at the beggining of the list
  *@head: The start of the elements input
  *@n: Data argument input
  *Return: Address of the new element
  */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}
