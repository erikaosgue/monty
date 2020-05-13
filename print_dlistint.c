#include "monty.h"
/**
 * print_dlistint - Prints all the elements of a stack_t list.
 * @h:Points to the node which is the head of the list
 * Return:  the number of nodes
 */

size_t print_dlistint(const stack_t *h)
{
	printf("in printing list\n");
	size_t count_node = 0;

	if (h == NULL)
		return (0);

	while (h)
	{
		printf("%d\n", h->n);
		count_node += 1;
		h = h->next;
	}
	return (count_node);
}
