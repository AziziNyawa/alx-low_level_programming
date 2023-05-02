#include "lists.h"
#include <stdlib.h>
/**
 * free_listint - it frees the node
 * @head: the pointer of first node
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	listint_t *next;

	while (head != NULL)
	{
		next = head->next;
		free(head);
		head = next;

	}
}
