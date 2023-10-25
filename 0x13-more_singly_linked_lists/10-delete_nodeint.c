#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at a given index
 * @head: pointer to a pointer to the first node in the linked list
 * @index:  the index of the list where the node is to be deleted,
 * starting at 0
 *
 * Return: 1 is successful, -1 if it fails
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *temp;
	listint_t *hold;

	temp = *head;
	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
		return (-1);
	for (i = 0; i < index - 1 && temp != NULL && index != 0; i++)
		temp = temp->next;
	if (temp == NULL)
		return (-1);
	if (index == 0)
	{
		hold = temp->next;
		free(temp);
		*head = hold;
	}
	else
	{
		if (temp->next == NULL)
			hold = temp->next;
		else
			hold = temp->next->next;
		free(temp->next);
		temp->next = hold;
	}
	return (1);
}
