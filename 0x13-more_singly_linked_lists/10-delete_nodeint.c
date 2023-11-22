#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * delete_nodeint_at_index - Write a function that deletes the node
  * at index 'index' of a linked list.
  *
  * @head: pointer to pointer to first node in the list.
  *
  * @index: index to be deleted.
  *
  * Return: 1 if it succeeds, -1 if it fails.
  */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *prev = NULL;
	listint_t *current = *head;
	listint_t *temp;

	if (*head == NULL)
	{
		return (-1);
	}

	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	if (current == NULL)
	{
		return (-1);
	}

	for (i = 0 ; i < index && current != NULL ; i++)
	{
		prev = current;
		current = current->next;
	}

	prev->next = current->next;
	free(current);

	return (1);
}
