#include<stdio.h>
#include<string.h>
#include "lists.h"

/**
  *print_list - Function that prints the list
  *@h:the FUnction input
  *Return: The list
  */

size_t print_list(const list_t *h)
{
	/*Counts the no of nodes*/
	size_t count = 0;

	while (h != NULL)
	{
		if (h->str != NULL)
			printf("[%d] %s\n", h->len, h->str);
		else
			printf("[0] (nil)\n");
		count++;
		h = h->next;
	}
	return (count);
}

