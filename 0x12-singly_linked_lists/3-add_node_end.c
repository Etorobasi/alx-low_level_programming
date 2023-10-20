#include "lists.h"
int len(const char *str);
list_t *create_node(const char *str);
/**
 * create_node - creates a new node
 * @str: given string
 * Return: the new node
 */

list_t *create_node(const char *str)
{
	list_t *new_node;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	new_node->str = strdup(str);
	new_node->len = len(str);
	new_node->next = NULL;
	return (new_node);
}

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: beginning of list
 * @str: given string
 *
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp;
	list_t *new_node;

	temp = *head;
	if (head == NULL)
		return (NULL);
	new_node = create_node(str);
	if (new_node == NULL)
		return (NULL);
	if (*head == NULL)
	{
		*head = new_node;
		return (*head);
	}
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = new_node;
	return (*head);
}

/**
 * len - calculates the length of a given string
 * @str: given string
 *
 * Return: returns the length
 */
int len(const char *str)
{
	int i = 0;

	if (str == NULL)
		return (0);
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
