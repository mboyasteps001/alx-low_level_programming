#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
  *free_list - Function that free all the memory of the lists
  *@head: Pointer to the head input
  *Return: Nothing
  */

void free_list(list_t *head)
{
	list_t *next_node;
	list_t *current_node = head;

	while (current_node != NULL)
	{
		next_node = current_node->next;
		free(current_node->str);
		free(current_node);
		current_node = next_node;
	}
}
