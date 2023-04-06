#include "lists.h"

/**
  *pop_listint - Function that deletes the head and returns the head node data
  *@head: The beggining of the data input
  *Return: Data in the head node
  */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int p;

	if (*head == NULL)
		return (0);
	temp = *head;
	p = temp->n;
	*head = (*head)->next;
	free(temp);
	return (p);
}
