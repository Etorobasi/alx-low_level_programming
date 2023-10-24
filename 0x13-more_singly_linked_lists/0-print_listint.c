#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list
 * @h: pointer to the head of the list
 *
 * Return: a size_t
 */
size_t print_listint(const listint_t *h)
{
	size_t i = 0;
	const listint_t *temp;

	temp = h;
	while (temp->next != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
	}
	i += printf("%d\n", temp->n);
	return (i);
}
