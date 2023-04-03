#include<stdio.h>
#include "lists.h"

/**
  *list_len - Function that return the number of elements linked
  *@h: Pointer to first node head
  *Return: No of elements linked
  */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
