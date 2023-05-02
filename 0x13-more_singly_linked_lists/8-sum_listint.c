#include "lists.h"
#include <stdlib.h>
/**
 * sum_listint - sum of all the data in the node
 * @head: pointer to the node at the start of list
 * Return: sum of all the data
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
