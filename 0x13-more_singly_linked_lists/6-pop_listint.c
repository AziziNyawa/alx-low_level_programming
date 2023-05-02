#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - deletes the head node of the lists
 * @head: head of a that has address
 *
 * Return: head node's data.
 */
int pop_listint(listint_t **head)
{
	int delnode;
	listint_t *h;
	listint_t *curr;

	if (*head == NULL)
		return (0);

	curr = *head;

	delnode = curr->n;

	h = curr->next;

	free(curr);

	*head = h;

	return (delnode);
}
