#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - inserts a new node a position
 * @head: header storing address
 * @idx: the index the node to be inserted
 *
 *@n: an interger to be added
 * Return: the address
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new;
	listint_t *t;

	t = *head;

	if (idx != 0)
	{
		for (i = 0; i < idx - 1 && t != NULL; i++)
		{
			t = t->next;
		}
	}

	if (t == NULL && idx != 0)
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
	}
	else
	{
		new->next = t->next;
		t->next = new;
	}

	return (new);
}
