#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "monty.h"


/** para subir a github*//** para subir a github*/
/** para subir a github*/


/**
 * push - add node initial of a list
 * @head: Pointer from main
 * @n: Integer to node
 *
 * Return: head
 */

void *func_push(stack_t **head, unsigned int n)
{
	stack_t *new_node;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(stack_t));
	if (!new_node)
		return (NULL);
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = *head;

	if (*head)
		(*head)->prev = new_node;
	*head = new_node;
}

/**
 * pall - for managment of a list
 * @h: poniter
 * Return: forward Value Counter.
*/

void func_pall(const stack_t *h, unsigned int n)
{
	int forward = 0;

	while (h)
	{
		printf("%d\n", h->n);
		forward++;
		h = h->next;
	}
}

/**
 * pint - for managment of a list
 * @h: poniter
 * Return: forward Value Counter.
*/

void func_pint(const stack_t *h, unsigned int n)
{
	printf("%d\n", h->n);
}

/**
 * swap - Swaps first two elements.
 * @stack: pointer node.
 * @line_number: number in file.
 */

void func_swap(stack_t **stack, unsigned int line_number)
{	

	stack_t *temp, *node;
	int h;

	if (!stack || !*stack || !(*stack)->next)
	{
		printf("L%d: can't swap, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	else
	{
		temp = *stack;
		node = temp->next;
		h = temp->n;
		temp->n = node->n;
		node->n = h;
	}
}

void func_nop(stack_t **stack, unsigned int line_number)
{
	(void)stack;
	(void)line_number;
}
