#include "lists.h"
#include <stdio.h>

/**
  * listint_len - Returns the number of elements in a linked list.
  *
  * @h: Pointer to first node.
  *
  * Return: Elements in a linked list or NULL.
  */

size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		h = h->next;
		nodes++;
	}

	return (nodes);
}
