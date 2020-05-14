#include "monty.h"
/**
 * func_push - add a stack to the top of a list
 * @head: Points to the head of the list
 * @numlinea: Its the line number of the file
 */

void func_push(stack_t **head, unsigned int numlinea)
{
	stack_t *success = NULL;


	success = add_dnodeint(head, exit_and_Svalue[1]);
	exit_and_Svalue[0] = 0;
	if (!success)
		exit_and_Svalue[0] = 1;
	(void)numlinea;
}

/**
 * func_pall - print all the elements of the stack
 * @stack: Points to the head of the list
 * @line_number: Its the line number of the file
*/
void func_pall(stack_t **stack, unsigned int line_number)
{
	print_dlistint(*stack);
	exit_and_Svalue[0] = 0;
	(void)line_number;
}

/**
 * func_pint - print just the top value of the stack
 * @stack: Points to the head of the list
 * @line_number: Its the line number of the file
*/

void func_pint(stack_t **stack, unsigned int line_number)
{
	if (!*stack)
	{
		fprintf(stderr, "L%u: can't pint, stack empty", line_number);
		exit_and_Svalue[0] = 1;
	}
	else
	{
		fprintf(stdout, "%d\n", (*stack)->n);
		exit_and_Svalue[0] = 0;
	}
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
		fprintf(stderr, "L%d: can't swap, stack too short\n", line_number);
		exit_and_Svalue[0] = 1;
	}
	else
	{
		temp = *stack;
		node = temp->next;
		aux = temp->n;
		temp->n = node->n;
		node->n = aux;
		exit_and_Svalue[0] = 0;
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
	exit_and_Svalue[0] = 0;
}
