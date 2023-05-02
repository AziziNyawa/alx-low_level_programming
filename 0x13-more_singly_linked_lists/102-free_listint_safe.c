#include "lists.h"
#include <stdlib.h>

/**
 * free_listint_safe - frees a listint_t list
 * @h: pointer to first node
 * Return: freesd nodes
 */
size_t free_listint_safe(listint_t **h)
{
	size_t len = 0;
	int d;
	listint_t *temp;

	if (!h || !*h)
		return (0);

	do {
		d = (*h) - (*h)->next;
		if (d > 0)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
		}
		else
		{
			free(*h);
			*h = NULL;
		}
		len++;
	} while (*h);

	return (len);
}
