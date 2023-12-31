#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to a pointer to the first node in the linked list
 * @idx:  the index of the list where the new nodeis to be added,
 * starting at 0
 * @n: data to be stored in new node
 *
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *temp;
	listint_t *hold;
	listint_t *newNode;

	temp = *head;
	if (head == NULL)
		return (NULL);
	newNode = (listint_t *) malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	newNode->next = NULL;
	if (*head == NULL)
	{
		*head = newNode;
		return (newNode);
	}
	if (idx == 0)
		*head = newNode;
	for (i = 0; i < idx - 1 && temp != NULL && idx != 0; i++)
		temp = temp->next;
	if (temp == NULL)
		return (NULL);
	if (idx == 0)
		newNode->next = temp;
	else
	{
		hold = temp->next;
		temp->next = newNode;
		newNode->next = hold;
	}
	return (newNode);
}
