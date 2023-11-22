#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * free_listint_safe - Write a function that frees a linked list.
  *
  * @h: Double pointer to the first node of the list.
  *
  * Return: The size of list freed.
  */

size_t free_listint_safe(listint_t **h)
{
	size_t len = 0;
	listint_t *temp;

	if (h == NULL || *h == NULL)
	{
		return (0);
	}

	/* increments len to count number of nodes in list then checks */
	/* if the current node is less than or equal to the next node */
	/* (this means the list has a loop) so it sets next pointer to NULL */
	/* frees the current node, sets the current node to NULL */
	/* -and breaks out of the loop */
	while (*h != NULL)
	{
		len++;
		if (*h <= (*h)->next)
		{
			(*h)->next = NULL;
			free(*h);
			*h = NULL;
			break;
		}
		/* if the current node is not less or equal to the next node */
		/* temp is set to the next node, and current node to temp */
		/* effectively moving to the next node in the list */
		temp = (*h)->next;
		free(*h);
		*h = temp;
	}
	/* after the loop, the head is set to NULL and returns size of list freed */
	*h = NULL;

	return (len);
}
