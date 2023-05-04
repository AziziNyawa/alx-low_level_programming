#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_listint - dispaly a linked lists
 * @h: holds address of first node
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	if (h == NULL)
		return (0);
	printf("%d\n", h->n);
	return (1 + print_listint(h->next));
}
