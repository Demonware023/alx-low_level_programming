#include "lists.h"
#include <stdio.h>
#include <string.h>
#include <stddef.h>
#include <stdlib.h>

/**
  * add_node_end - adds a new node at the end of a linked list.
  *
  * @head: pointer to pointer to head of the linked list.
  *
  * @str: pointer to string to add at the end.
  *
  * Return: new element or NULL
  */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *end;

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
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		end = *head;
		while (end->next != NULL)
		{
			end = end->next;
		}
		end->next = new;
	}

	return (new);
}
