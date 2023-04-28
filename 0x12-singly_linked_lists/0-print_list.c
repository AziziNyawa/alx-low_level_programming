#include "lists.h"

/**
 * print_list - prints the list of nodes
 * @h: the pointer to the list to be printed
 * Return: the number of nodes available
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		if (h->str)
			printf("[%u] %s\n", h->len, h->str);
		else
			printf("[0] (nil)\n");
		count++;
		h = h->next;
	}

	return (count);
}
