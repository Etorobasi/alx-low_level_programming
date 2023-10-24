#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n) of a linked list
 * @head: pointer to the head of the list
 *
 * Return: returns the sum of all the data (n) in the list
 * or if the list is empty, return 0
 */
int sum_listint(listint_t *head)
{
	int count = 0;

	if (head == NULL)
		return (0);
	while (head->next != NULL)
	{
		count += head->n;
		head = head->next;
	}
	count += head->n;
	return (count);
}
