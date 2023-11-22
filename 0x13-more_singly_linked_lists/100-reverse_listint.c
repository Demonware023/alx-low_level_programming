#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * *reverse_listint - Write a function that reverses a linked list.
  *
  * @head: Pointer to pointer of the first node in the linked list.
  *
  * Return: A pointer to the first node of the reversed list or -1.
  */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *current = *head;
	listint_t *prev = NULL;

	if (*head == NULL)
	{
		return (NULL);
	}
	/* Tranverse the linked list */
	while (current != NULL)
	{
		/* Set the next node in a temporary variable */
		listint_t *temp = current->next;
		/* Reverse the direction of the current node by setting */
		/* its next pointer to point to the previous node */
		/* (reversing the link) */
		current->next = prev;
		/* Move the prev and current pointers one step */
		prev = current;
		current = temp;
	}
	/* Update the head pointer to point to the new first node of the list. */
	*head = prev;

	/* Return the head of the reversed list */
	return (*head);
}
