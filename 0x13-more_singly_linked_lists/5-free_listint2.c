#include "lists.h"

/**
 * free_listint2 - frees a linked list and sets head to NULL
 * @head: pointer to a pointer to the beginning of the list
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL || *head == NULL)
		return;

	while ((*head)->next != NULL)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
	free(*head);
	*head = NULL;
}
