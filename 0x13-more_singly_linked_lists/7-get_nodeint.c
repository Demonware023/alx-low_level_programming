#include "lists.h"
#include <stdio.h>

/**
  * *get_nodeint_at_index - returns the nth node of a linked list
  *
  * @head: Pointer to first element of the list.
  *
  * @index: index to get node.
  *
  * Return: NULL or nth node.
  */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	/* Variable to track the current index */
	unsigned int i = 0;

	/* Transerve the list until reaching the desired index */
	while (head != NULL)
	{
		/* Check if the current node is the one you are looking for */
		if (i == index)
		{
			return (head);
		}
		/* Move to the next node and increment the index */
		head = head->next;
		i++;
	}
	/* If the index is out of bounds, return NULL */
	return (NULL);
}
