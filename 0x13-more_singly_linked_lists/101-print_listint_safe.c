#include "lists.h"

/**
 * _freelistptr - frees listptr_t linked list
 * @head: pointer to a pointer to the beginning of list
 */
void _freelistptr(listptr_t **head)
{
	listptr_t *current;
	listptr_t *temp;

	if (head != NULL)
	{
		current = *head;
		while ((temp = current) != NULL)
		{
			current = current->next;
			free(temp);
		}
		*head = NULL;
	}
}
/**
 * print_listint_safe - prints a linked list
 * @head: pointer to the beginning of the list
 *
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t i = 0;
	listptr_t *hptr, *new, *add;

	hptr = NULL;
	while (head != NULL)
	{
		new = malloc(sizeof(listptr_t));
		if (new == NULL)
			exit(98);

		new->p = (void *)head;
		new->next = hptr;
		hptr = new;

		add = hptr;

		while (add->next != NULL)
		{
			add = add->next;
			if (head == add->p)
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				_freelistptr(&hptr);
				return (i);
			}
		}
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		i++;
	}
	_freelistptr(&hptr);
	return (i);
}
