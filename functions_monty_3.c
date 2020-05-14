#include "monty.h"
/**
 * func_mod - get the module of the second top with the top node in the list
 * @stack: Pointer to the head of the list
 * @line_number: An int that count each line
 */
void func_mod(stack_t **stack, unsigned int line_number)
{
	stack_t *head;
	int mod = 0;

	if (!stack || !*stack || !(*stack)->next)
	{
		printf("L%d: can't mod, stack too short\n", line_number);
		exit_value = 1;
	}
	head = *stack;
	mod = head->next->n;
	mod %= head->n;
	head->next->n = mod;
	delete_dnodeint_at_index(stack, 0);

}

/**
 * func_pchar - prints the char at the top of the stack
 * @stack: Pointer to the head of the list
 * @line_number: An int that count each line
 */
void func_pchar(stack_t **stack, unsigned int line_number)
{
	int num = 0;

	if (!*stack)
	{
		fprintf(stderr, "L%d: can't pchar, stack empty", line_number);
		exit_value = 1;
	}
	if (num >= 0 && num <= 127)
	{
		num = (*stack)->n;
	}
	else
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", line_number);
		exit_value = 1;
	}
}
