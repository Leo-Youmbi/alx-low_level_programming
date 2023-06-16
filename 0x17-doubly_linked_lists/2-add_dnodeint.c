#include "lists.h"

/**
 * add_dnodeint - Add a node to the linked list.
 * @head: head of list
 * @n: value of node
 *
 * Return: new node
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode;

	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
	{
		free(newNode);
		return (NULL);
	}
	newNode->n = n;
	newNode->next = *head;
	newNode->prev = NULL;
	*head = newNode;

	return (newNode);
}
