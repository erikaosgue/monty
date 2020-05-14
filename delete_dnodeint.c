#include "monty.h"
/**
 * dlistint_len - Count the number of elements in a linked stack_t list
 * @h:Points to the node which is the head of the list
 * Return: the number of elements in a linked stack_t list.
 */
size_t dlistint_len(const stack_t *h)
{
	size_t count_node = 0;

	if (h == NULL)
		return (0);
	while (h)
	{
		count_node += 1;
		h = h->next;
	}
	return (count_node);
}
/**
 * delete_dnodeint_at_index - A function that deletes the node
 * at index index of a stack_t linked list.
 * @head: Points to the head pointer that points to the head node of the list
 * @index:is the index of the node that should be deleted. Index starts at 0
 * Return:1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(stack_t **head, unsigned int index)
{
	stack_t *current = NULL, *previous = NULL, *temp = NULL;
	unsigned int count = 0, len_list = 0;

	if (head == NULL || *head ==  NULL)
		return (-1);
	current = previous = *head;
	len_list = dlistint_len(*head);
	if (index < len_list)
	{
		while (current)
		{
			if (index == 0)
			{
				if (current->next == NULL)
				{
					free(current), *head = NULL;
					return (1);
				}
				temp = current, current = current->next, free(temp);
				current->prev = NULL, *head = current;
				return (1);
			}
			count += 1, previous = current, current = current->next;
			if (current->next == NULL && index == count)
			{
				previous->next = NULL, free(current);
				return (1);
			}
			if (index == count)
			{
				temp = current, current = current->next, free(temp);
				previous->next = current, current->prev = previous;
				return (1);
			}
		}
	}
	return (-1);
}
