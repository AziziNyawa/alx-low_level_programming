#include "lists.h"

/**
 * add_node_end - it adds a new node at the end 
 * @head: head of the linked list.
 * @str: the string that has the list
 * Return: the address to the node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *tmp;
	size_t count;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);

	for (count = 0; str[count]; count++)
		;

	new->len = count;
	new->next = NULL;
	tmp = *head;

	if (tmp == NULL)
	{
		*head = new;
	}
	else
	{
		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = new;
	}

	return (*head);
}
