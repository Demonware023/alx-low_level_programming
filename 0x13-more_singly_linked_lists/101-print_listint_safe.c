#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * print_listint_safe - Write a funtion that prints a linked list.
  *
  * @head: Pointer to the first node in the list.
  *
  * Return: Number of nodes in the list or exit with 98 if failed.
  */

size_t print_listint_safe(const listint_t *head)
{
	size_t num = 0;
	const listint_t *slow;
	const listint_t *fast;
	/* Checks if the list is empty and exits with 98 for error */
	if (head == NULL)
	{
		exit(98);
	}

	/* Initializes slow and fast to point to head */
	slow = head;
	fast = head;
	/* Transverses the list to print linked list as long as- */
	/* slow, fast and fast->next are not NULL */
	while (slow != NULL && fast != NULL && fast->next != NULL)
	{
		/* Prints the address and value of the node pointed- */
		/* -to by slow and increments the num counter. */
		printf("[%p] %d\n", (void *)slow, slow->n);
		num++;
		/*slow is moved one step foward and fast two steps foward */
		slow = slow->next;
		fast = fast->next->next;
		/* If at any point slow and fast point to the same node-, */
		/* it means a loop was detected, prints the addrees and- */
		/* -value of the node where the lopp was detected and- */
		/* returns the num of nodes tranversed before detecting the loop */
		if (slow == fast)
		{
			printf("-> [%p] %d\n", (void *)slow, slow->n);
			return (num);
		}
	}
	/* if no loop is detected and end is reached, returns total nodes */
	return (num);
}
