#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - Deletes the node at index of a dlistint_t linked list.
 * @head: Pointer to a pointer to the head of the doubly linked list.
 * @index: Index of the node to be deleted. Index starts at 0.
 * Return: 1 if succeeded, -1 if failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
    dlistint_t *temp, *prev;
    unsigned int count = 0;

    if (head == NULL || *head == NULL)
        return -1;

    temp = *head;

    if (index == 0)
    {
        *head = temp->next;
        if (*head != NULL)
            (*head)->prev = NULL;
        free(temp);
        return 1;
    }

    while (temp != NULL && count < index)
    {
        prev = temp;
        temp = temp->next;
        count++;
    }

    if (temp == NULL)
        return -1;

    prev->next = temp->next;

    if (temp->next != NULL)
        temp->next->prev = prev;

    free(temp);

    return 1;
}
