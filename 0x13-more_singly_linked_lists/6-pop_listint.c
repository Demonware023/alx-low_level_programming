#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * pop_listint - Deletes the head node of a linked list,
  * and returns the head node's data.
  *
  * @head: pointer to the first node in the linked list.
  *
  * Return: 0(if empty) or head node's data.
  */

int pop_listint(listint_t **head)
{
	int data;
	listint_t *temp;

	if (head == NULL || *head == NULL)
	{
		return (0);
	}
	/* Save the reference to the head node */
	temp = *head;
	/* Get the data of the head node */
	data = temp->n;
	/* Move the head to the next node*/
	*head = temp->next;
	free(temp);

	return (data);
}
