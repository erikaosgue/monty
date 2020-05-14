#include "monty.h"

/**
 * add_dnodeint_end - adds a new node at the end of a stack_t list.
 * @head: Points to the head that points to the node that is the head
 * of the list
 * @n: Integer value of the new node
 * Return: the address of the new element, or NULL if it failed
 */
stack_t *add_dnodeint_end(stack_t **head, const int n)
{
	stack_t *current, *new;

	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(stack_t));
	if (new == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit_and_Svalue[0] = 1;
		return (NULL);
	}
	current = *head;
	new->n = n;
	/* sera la cabeza del nodo */
	if (*head == NULL)
	{
		new->next = new->prev = NULL, *head = new;
		return (*head);
	}
	while (current->next)
		current = current->next;

	if (current->next == NULL)
	{
		current->next = new, new->next = NULL, new->prev = current;
		return (*head);
	}
	else
		return (NULL);
}

/**
 * get_dnodeint_at_index - Find the nth node of a stack_t linked list.
 * @head: Points to the head that points to the node that is the head
 * @index:  is the index of the node, starting from 0
 * Return: the nth node of a stack_t linked list
 * if the node does not exist, return NULL
 */
stack_t *get_dnodeint_at_index(stack_t *head, unsigned int index)
{
	unsigned int count = 0;
	stack_t *current = head;

	while (current)
	{
		if (index == count)
			return (current);
		current = current->next;
		count += 1;
	}
	return (NULL);
}

