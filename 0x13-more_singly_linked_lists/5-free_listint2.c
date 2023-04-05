#include "lists.h"

/**
  *free_listint2 - Function that free all elements in the list
  *@head: Strarting input for the list
  *Return: Nothing
  */

void free_listint2(listint_t **head)
{
	listint_t *CurrentNode;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		CurrentNode = *head;
		*head = (*head)->next;
		free(CurrentNode);
	}
	*head = NULL;
}
