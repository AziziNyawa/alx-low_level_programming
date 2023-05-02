#include "lists.h"
#include "stdlib.h"

/**
 * delete_nodeint_at_index - deletes the selected node at index
 * @head: head of holding the address.
 * @index: index at which the node is to be deleted
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *intial;
	listint_t *next;

	intial = *head;

	if (index != 0)
	{
		for (i = 0; i < index - 1 && intial != NULL; i++)
		{
			intial = intial->next;
		}
	}

	if (intial == NULL || (intial->next == NULL && index != 0))
	{
		return (-1);
	}

	next = intial->next;

	if (index != 0)
	{
		intial->next = next->next;
		free(next);
	}
	else
	{
		free(intial);
		*head = next;
	}

	return (1);
}
