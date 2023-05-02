#include "lists.h"
#include <stdlib.h>
/**
 * get_nodeint_at_index - the nth node at the list
 * @head: the pointer
 * @index: index to the nth node to be insertd
 * Return: pointer of the index
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	if (head == NULL)
		return (NULL);
	for (i = 0; i < index; i++)
	{
		head = head->next;
		if (head == NULL)
			return (NULL);
	}
	return (head);
}
