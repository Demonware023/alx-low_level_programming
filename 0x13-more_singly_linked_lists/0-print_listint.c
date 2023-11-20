#include "lists.h"
#include <stdio.h>

/**
  * print_listint - A funtion that prints all elements of a linked list.
  *
  * @h: Head of the node.
  *
  * Return: The number of nodes or NULL.
  */

size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		nodes++;
	}

	return (nodes);
}
