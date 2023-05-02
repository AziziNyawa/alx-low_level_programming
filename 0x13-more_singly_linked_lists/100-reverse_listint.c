#include "lists.h"
#include <stdlib.h>

/**
 * reverse_listint - reverses the list
 * @head: head of a list holding address
 *
 * Return: pointer to the first node in reverse
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *p;
	listint_t *n;

	p = NULL;
	n = NULL;

	while (*head != NULL)
	{
		n = (*head)->next;
		(*head)->next = p;
		p = *head;
		*head = n;
	}

	*head = p;
	return (*head);
}
