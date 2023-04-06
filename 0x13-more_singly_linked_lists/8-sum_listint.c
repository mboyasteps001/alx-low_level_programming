#include "lists.h"

/**
  *sum_listint - Function that sums the values in the linked list
  *@head: Starting of the list
  *Return: The sum of the list
  */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum = sum + head->n;
		head = head->next;
	}
	return (sum);
}
