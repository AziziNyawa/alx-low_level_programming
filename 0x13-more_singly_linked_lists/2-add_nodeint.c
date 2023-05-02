#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint - it adds a new node at the start if the node
 * @head: it stores the address of the first node
 * @n: to be added to the node
 * Return: null is failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr;

	if (head == NULL)
	{
		return (NULL);
	}
	ptr = malloc(sizeof(listint_t));
	if (ptr == NULL)
	{
		return (NULL);
	}
	ptr->n = n;
	ptr->next = *head;
	*head = ptr;
	return (ptr);
}
