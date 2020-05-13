#include "monty.h"
/* Para eliminar */

/**
 * add_dnodeint - adds a new node at the beginning of a stack_t list
 * @head: Points to the head that points to the node that is the head
 * of the list
 * @n: Integer value of the new node
 * Return: the address of the new element, or NULL if it failed
 */
stack_t *add_dnodeint(stack_t **head, const int n)
{
	stack_t *current;
	stack_t *new;

	current = *head;
	new = malloc(sizeof(stack_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->prev = NULL;

	if (current == NULL)
	{
		new->next = NULL;
		*head = new;
		printf("---> Success adding a new stack\n");
		print_dlistint(*head);
		return (*head);
	}
	current->prev = new;
	new->next = current;
	*head = new;
	printf("---> Success adding a new stack\n");
	print_dlistint(*head);
	return (*head);
}
