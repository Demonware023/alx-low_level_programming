#include "lists.h"

/**
  * dlistint_len - returns the number of elements in a linked list.
  *
  * @h: head of the linked list or first node.
  *
  * Return: number of nodes in the list.
  */

size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}

	return (count);
}
