#include "lists.h"
#include <stdlib.h>
/**
 * pop_listint - it delets a node
 * @head: it stores a double pointer
 * Return: the nodes data
 */
int pop_listint(listint_t **head)
{
	listint_t *startnode;
	int n;

	if (*head == NULL && head == NULL)
	{
		return (0);
	}
	startnode = *head;
	*head = startnode->next;
	n = startnode->n;
	free(startnode);
	return (n);
}
