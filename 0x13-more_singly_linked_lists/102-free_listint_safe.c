#include "lists.h"

/**
 * _freelistp2 - frees listptr_t linked list
 * @head: pointer to a pointer to the beginning of list
 */
void _freelistp2(listptr_t **head)
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
 * free_listint_safe - frees a linked list
 * @h: pointer to the beginning of the list
 *
 * Return: the size of the free'd list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t i = 0;
	listptr_t *hptr, *new, *add;
	listint_t *current;

	hptr = NULL;
	while (*h != NULL)
	{
		new = malloc(sizeof(listptr_t));
		if (new == NULL)
			exit(98);

		new->p = (void *)*h;
		new->next = hptr;
		hptr = new;

		add = hptr;

		while (add->next != NULL)
		{
			add = add->next;
			if (*h == add->p)
			{
				*h = NULL;
				_freelistp2(&hptr);
				return (i);
			}
		}
		current = *h;
		*h = (*h)->next;
		free(current);
		i++;
	}
	*h = NULL;
	_freelistp2(&hptr);
	return (i);
}
