#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * *find_listint_loop - A function that finds the loop in a linked list.
  *
  * @head: pointer to the first node/member of the linked list.
  *
  * Return: The address of the node where the loop starts or NULL if no loop.
  */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *tortoise, *hare;

	tortoise = head;
	hare = head;

	if (head == NULL)
	{
		return (NULL);
	}

	/* while loop advances tortoise by one step and hare by two steps*/
	/* if loop exists hare(which moves faster) would catch up to tortoise*/
	/* if no loop, hare or hare->next will become NULL, ending the loop*/
	while (tortoise && hare && hare->next)
	{
		tortoise = tortoise->next;
		hare = hare->next->next;
		/* when tortoise and hare meet, loop exists but meeting */
		/* point is not necessarily start of the loop, to find the start */
		/* -of the loop we reste tortoise to the head of the list */
		/* and keep hare at meeting point then advance both one step at a time */
		/* the point they meet again is the start of the loop */
		if (tortoise == hare)
		{
			tortoise = head;
			while (tortoise && hare)
			{
				if (tortoise == hare)
				{
					return (tortoise);
				}
				tortoise = tortoise->next;
				hare = hare->next;
			}
		}
	}

	return (NULL);
}
