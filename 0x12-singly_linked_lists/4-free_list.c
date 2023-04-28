#include "lists.h"

/**
 * free_list - it works to free the list
 * @head: head of the linked list
 * Return: nothing
 */

void free_list(list_t *head)
{
	list_t *intial;

	while ((intial = head) != NULL)
	{
		head = head->next;
		free(intial->str);
		free(intial);
	}
}
