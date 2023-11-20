#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * free_listint2 - Write a function that frees a linked list.
  *
  * @head: Pointer to Pointer to head of the list.
  *
  * Return: Head or NULL.
  */

void free_listint2(listint_t **head)
{
	listint_t *current, *nextNode;

	current = *head;
	while (current != NULL)
	{
		nextNode = current->next;
		free(current);
		current = nextNode;
	}
}
