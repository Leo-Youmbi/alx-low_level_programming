#include "lists.h"

/**
 * *add_dnodeint - Add a node to the linked list.
 * @head: head of list
 * @n: value of node
 *
 * Return: new node
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode;
	dlistint_t *h;

	h = *head;
	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
	{
		free(newNode);
		return (NULL);
	}
	newNode->n = n;
	newNode->prev = NULL;
	h->prev = newNode;
	newNode->next = h;
	*head = newNode;

	return (newNode);
}
