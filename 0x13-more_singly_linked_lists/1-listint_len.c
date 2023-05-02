#include "lists.h"
/**
 * listint_len - prints the number of nodes
 * @h: the head of the nodes
 * Return: numbers of nodes present
 */
size_t listint_len(const listint_t *h)
{
	size_t fig = 0;

	while (h != NULL)
	{
		h = h->next;
		fig++;
	}
	return (fig);
}
