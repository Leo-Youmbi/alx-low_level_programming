#include "lists.h"

/**
 * print_dlistint - print all the elements in a double linked list
 * @h: head of list
 *
 * Return: size of the list
*/
size_t print_dlistint(const dlistint_t *h)
{
	size_t size = 0;
	const dlistint_t *current = h;

	while (current)
	{
		printf("%i\n", current->n);
		current = current->next;
		size += 1;
	}
	return (size);
}

