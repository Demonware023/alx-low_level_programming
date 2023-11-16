#include "lists.h"
#include <stdio.h>

/**
  * list_len - returns the numbers of elements in a linked list.
  *
  * @h: pointer to the first element.
  *
  * Return: the number of elements in the linked list.
  */

size_t list_len(const list_t *h)
{
	size_t node = 0;

	while (h != NULL)
	{
		h = h->next;
		node++;
	}

	return (node);
}
