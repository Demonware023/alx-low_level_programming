#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * *add_nodeint_end - adds a new node at the end of a linked list.
  *
  * @head: Pointer to pointer to first node of the list.
  *
  * @n: Node to insert at the end.
  *
  * Return: New element or NULL if it fails.
  */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *temp;

	/*Allocate memory for temp/newnode and returns null if allocation fails*/
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}

	/*Set new node to n*/
	new_node->n = n;
	/*Set next in new node to last node address*/
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	/*Tranverse list to the last node and set current head to temp*/
	temp = *head;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	/*Set the new node to last data*/
	temp->next = new_node;

	return (new_node);
}
