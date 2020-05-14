#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "monty.h"

/**
 * sum_dlistint - get determinate node.
 * @head: Head of linked list.
 * Return: Always 0.
*/
stack_t	*sum_dlistint(stack_t **head)
{
	int sum = 0;

	if (*head == NULL || head == NULL)
		return (NULL);

	sum = (*head)->n + (*head)->next->n;
	(*head)->next->n = sum;
	return (*head);
}
