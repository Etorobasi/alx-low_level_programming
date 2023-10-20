#include "lists.h"

/**
 * list_len - prints the number of elements in a linked list
 * @h: pointer to elements in a linked list
 *
 * Return: the number of elements
 */
size_t list_len(const list_t *h)
{
	unsigned int i;

	if (h == NULL)
		return (0);
	for (i = 1; h->next != NULL; i++)
		h = h->next;
	return (i);
}
