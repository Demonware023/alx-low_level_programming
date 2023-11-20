#include "lists.h"
#include "main.h"
#include <stdio.h>

/**
  * print_list - prints all elements of a linked list.
  *
  * @h: pointer to head of the list.
  *
  * Return: number of nodes.
  */

size_t print_list(const list_t *h)
{
	size_t node = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}

		h = h->next;
		node++;

	}

	return (node);
}
