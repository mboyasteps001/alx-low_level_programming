#include "lists.h"
#include<stdlib.h>
#include<string.h>

/**
  *add_node_end - add node at the end of the list
  *@head: The first element on the node
  *@str: String input
  *Return: NILL / address of the last string input
  */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *last_node;
	list_t *new_node = (list_t *) malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);
	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->len = strlen(str);
	if (*head == NULL)
		*head = new_node;
	else
	{
		last_node = *head;
		while (last_node->next != NULL)
			last_node = last_node->next;
		last_node->next = new_node;
	}
	return (new_node);
}














