#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * insert_nodeint_at_index - Write a function that inserts a new-
  * -node at a given position.
  *
  * @head: A pointer to a pointer to the head of the linked list.
  *
  * @idx: The index at which the new node should be inserted.
  *
  * @n: The value to be stored in the new node.
  *
  * Return: A pointer to the new node or NULL if the insertion fails.
  */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newNode, *current;
	unsigned int i;

	/* Allocates memory for the newNode and returns NULL if failed */
	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
	{
		return (NULL);
	}

	/* Sets the values n in the new node & initializes its next to NULL */
	newNode->n = n;
	newNode->next = NULL;
	/* if index is 0, the new node is inserted at the beginning of the list */
	if (idx == 0)
	{
		newNode->next = *head;
		*head = newNode;
		return (newNode);
	}
	/* If idx is not 0, the function enters a loop to transverse the list */
	/* until it reaches the node before the specified index */
	current = *head;
	for (i = 0 ; i < idx - 1 ; i++)
	{
		if (!current)
		{
			free(newNode);
			return (NULL);
		}
		current = current->next;
	}
	/* The next pointer of new node is set to next node of the current node */
	/*The next pointer of the current node is updated to point to the new node */
	newNode->next = current->next;
	current->next = newNode;

	return (newNode);
}
