#include "lists.h"

/**
 * dlistint_len - returns the size a double linked list
 * @h: head of list
 *
 * Return: size of the list
*/
size_t dlistint_len(const dlistint_t *h)
{
	size_t size = 0;
	const dlistint_t *current = h;

	while (current)
	{
		current = current->next;
		size += 1;
	}
	return (size);
}
