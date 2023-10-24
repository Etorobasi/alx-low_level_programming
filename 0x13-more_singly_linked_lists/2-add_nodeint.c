#include "lists.h"

/**
 * add_nodeint - adds a node at the beginning of a linked list
 * @head: a pointer to a pointer to the beginning of the list
 * @n: the number of elements in the linked list
 *
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode;

	newNode = (listint_t *) malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	if (*head == NULL)
		newNode->next = NULL;
	else
		newNode->next = *head;
	*head = newNode;
	return (newNode);
}
