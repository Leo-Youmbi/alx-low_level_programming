#include <stdlib.h>
#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list
 * @h: pointer to the list_t list
 *
 * Return: the length of the list
 */
size_t list_len(const list_t *h)
{
	size_t l;

	while (h)
	{
		l++;
		h = h->next;
	}

	return (l);
}
