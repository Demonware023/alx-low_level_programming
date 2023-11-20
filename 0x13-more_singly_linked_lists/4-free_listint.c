#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * free_listint - write a function that frees a linked list.
  *
  * @head: pointer to the first member of the list.
  *
  * Return: Void or Always 0 Success.
  */

void free_listint(listint_t *head)
{
	listint_t *current, *nextNode;
	/*set current head to current*/
	current = head;
	/*Tranverse through the list with new head(cuurent)*/
	while (current != NULL)
	{
		/*Store next node address in the nextnode variable*/
		nextNode = current->next;
		free(current);
		current = nextNode;
	}
}
