#include "lists.h"
#include<stdlib.h>
#include<stdio.h>
#include<string.h>

/**
  *add_node - adds node to the beggining of the line
  *@head: Pointer to the first node
  *@str: String to add node in the first of the list
  *Return: NILL on fail / starting address of the list
  */

list_t *add_node(list_t **head, const char *str)
{
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
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
