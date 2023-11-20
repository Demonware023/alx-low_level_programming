#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * *add_nodeint - adds a new node at the beginning of a linked list.
  *
  * @head: pointer to pointer to head of the node.
  *
  * @n: node to insert.
  *
  * Return: Address of new element or NULL.
  */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp;

	temp = malloc(sizeof(listint_t));
	if (temp == NULL)
	{
		return (NULL);
	}

	/* Set the value of the temp node*/
	temp->n = n;
	/*Set the next pointer of temp node to the current head*/
	temp->next = *head;
	/*Update the head to point to the new node*/
	*head = temp;

	return (temp);
}
