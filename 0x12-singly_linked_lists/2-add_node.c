#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
  * add_node - adds a new node at the beginning of a linked list.
  *
  * @head: pointer to pointer to head of the list.
  *
  * @str: pointer to string.
  *
  * Return: Address of new element or NULL.
  */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	if (str == NULL)
	{
		return (NULL);
	}

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		return (NULL);
	}

	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}

	new->len = strlen(str);
	new->next = *head;
	*head = new;

	return (new);
}
