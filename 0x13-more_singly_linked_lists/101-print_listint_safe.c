#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_listint_safe - dispalys the list
 * @head: pointer to the fisrt node
 * Return: new_node
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	size_t new;
	const listint_t *tmp = NULL;
	const listint_t *len = NULL;

	tmp = head;
	while (tmp)
	{
		printf("[%p] %d\n", (void *)tmp, tmp->n);
		count++;
		tmp = tmp->next;
		len = head;
		new = 0;
		if (!head)
			exit(98);
		while (new < count)
		{
			if (tmp == len)
			{
				printf("-> [%p] %d\n", (void *)tmp, tmp->n);
				return (count);
			}
			len = len->next;
			new++;
		}
	}
	return (count);
}
