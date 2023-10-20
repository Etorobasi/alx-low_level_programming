#include "lists.h"
int len(const char *str);
/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: pointer to a pointer to the beginning of the list
 * @str: string to be duplicated
 *
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	if (head == NULL)
		return (NULL);
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	if (*head == NULL)
		new_node->next = NULL;
	else
		new_node->next = *head;
	new_node->str = strdup(str);
	new_node->len = len(str);
	*head = new_node;

	return (*head);
}

/**
 * len - calculates the length of a string
 * @str: given string
 *
 * Return: the length of the string
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


