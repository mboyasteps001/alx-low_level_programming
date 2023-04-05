#include "lists.h"

/**
  *free_listint - Function that frees everything in the list
  *@head: The start of the list
  *Return: Nothing
  */

void free_listint(listint_t *head)
{
	listint_t *CurrentNode = head;
	listint_t *nextNode;

	while (CurrentNode != NULL)
	{
		nextNode = CurrentNode->next;
		free(CurrentNode);
		CurrentNode = nextNode;
	}

}
