#ifndef LISTS_H
#define LISTS_H

#include<stddef.h>

/**
  *struct list_s - linked lists
  *@str: String - (malloc'ed string)
  *@len: Lenght of the string
  *@next:Points to the next node
  *
  *Description - Singly linked list node structure
  */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

size_t print_list(const list_t *h);

#endif
