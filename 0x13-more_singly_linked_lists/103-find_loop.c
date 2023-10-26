#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: pointer to a pointer to the head
 *
 * Return: The address of the node where the loop starts,
 * or NULL if there is no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *ptr;
	listint_t *d_ptr;

	ptr = head;
	d_ptr = head;
	while (head && ptr && ptr->next)
	{
		head = head->next;
		ptr = ptr->next->next;

		if (head == ptr)
		{
			head = d_ptr;
			d_ptr = ptr;
			while (1)
			{
				ptr = d_ptr;
				while (ptr->next != head && ptr->next != d_ptr)
				{
					ptr = ptr->next;
				}
				if (ptr->next == head)
					break;
				head = head->next;
			}
			return (ptr->next);
		}
	}
	return (NULL);
}
