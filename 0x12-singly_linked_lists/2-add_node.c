#include "lists.h"
/**
 * add_node - adds a new node at the beginnig
 * @head: head of the linked list.
 * @str: string to the store
 * Return: address of the head.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	size_t count;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);

	for (count = 0; str[count]; count++)
		;

	new->len = count;
	new->next = *head;
	*head = new;

	return (*head);
}
