#include "monty.h"
/**
 * func_push - add a stack to the top of a list
 * @head: Points to the head of the list
 * @numlinea: Its the line number of the file
 */

void func_push(stack_t **head, unsigned int numlinea)
{
	stack_t *success = NULL;

	success = add_dnodeint(head, stack_value);
	if (!success)
		exit_value = 1;
	exit_value = 2;
	printf("End of func_push\n");
	(void)numlinea;
}

/**
 * func_pall - print all the elemnts of the stack
 * @stack: Points to the head of the list
 * @line_number: Its the line number of the file
*/
void func_pall(stack_t **stack, unsigned int line_number)
{
	print_dlistint(*stack);
	printf("&&& pall funcion\n");
	(void)line_number;
}

/**
 * func_pint - print just the top value of the stack
 * @stack: Points to the head of the list
 * @line_number: Its the line number of the file
*/

void func_pint(stack_t **stack, unsigned int line_number)
{
	printf("%d\n", (*stack)->n);
	(void)line_number;
}

/**
 * func_swap - Swaps first two elements of the list
 * @stack: Points to the head of the list
 * @line_number: Its the line number of the file
 */

void func_swap(stack_t **stack, unsigned int line_number)
{
	stack_t *temp, *node;
	int aux;

	if (!stack || !*stack || !(*stack)->next)
	{
		printf("L%d: can't swap, stack too short\n", line_number);
		exit_value = 1;
	}
	else
	{
		temp = *stack;
		node = temp->next;
		aux = temp->n;
		temp->n = node->n;
		node->n = aux;
	}
}

/**
 * func_nop - this function doesn’t do anything
 * @stack: Points to the head of the list
 * @line_number: Its the line number of the file
 */
void func_nop(stack_t **stack, unsigned int line_number)
{
	(void)stack;
	(void)line_number;
}
