#include "lists.h"
#include <stdio.h>

/**
  * sum_listint - A funtion that returns the sum of all-
  * -the data (n) of a linked list.
  *
  * @head: Pointer to the first node of the linked list.
  *
  * Return: 0 or Sum.
  */

int sum_listint(listint_t *head)
{
	/* Declare and initialize variable to hold the sum */
	int sum = 0;

	/* Check if list is empty and returns 0 if empty */
	if (head == NULL)
	{
		return (0);
	}
	else
	{
		/* Tranverse to the list and add the data n and increment */
		while (head != NULL)
		{
			sum += head->n;
			head = head->next;
		}
	}

	/*Return the total sum */
	return (sum);
}
