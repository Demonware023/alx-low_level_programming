#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * free_list - write a function that frees a linked list.
  *
  * @head: Pointer to the first node of the linked list.
  *
  * Return: Always 0 Success or NULL.
  */

void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp->str);
		free(temp);
	}
}
