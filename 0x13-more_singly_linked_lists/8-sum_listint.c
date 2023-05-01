#include "lists.h"

/**
 * sum_listint - calculates the sum of all the data in a listint_t list
 * @head: first node in the linked list
 *
 * Return: resulting sum
 */
int sum_listint(listint_t *head)
{
	listint_t *node;
	int sum = 0;

	node = head;
	while (node)
	{
		sum += node->n;
		node = node->next;
	}

	return (sum);
}
