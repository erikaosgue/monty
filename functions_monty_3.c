#include "monty.h"
/**
 * func_mod - get the module of the second top with the top node in the list
 * @stack: Pointer to the head of the list
 * @line_number: An int that count each line
 */
void func_mod(stack_t **stack, unsigned int line_number)
{
	stack_t *head;
	int mod = 0, success = 0;

	if (!stack || !*stack || !(*stack)->next)
	{
		fprintf(stderr, "L%u: can't mod, stack too short\n", line_number);
		exit_and_Svalue[0] = 1;
	}
	head = *stack;
	mod = head->next->n;
	if (mod != 0)
	{
		mod %= head->n;
		head->next->n = mod;
		success = delete_dnodeint_at_index(stack, 0);
		if (success == -1)
			exit_and_Svalue[0] = 1;
		exit_and_Svalue[0] = 0;
	}
	else
	{
		fprintf(stderr, "L%u: division by zero\n", line_number);
		exit_and_Svalue[0] = 1;
	}
}

/**
 * func_pchar - prints the char-ascci value of the top from the stack
 * @stack: Pointer to the head of the list
 * @line_number: An int that count each line
 */
void func_pchar(stack_t **stack, unsigned int line_number)
{
	int num = 0;

	if (!*stack)
	{
		fprintf(stderr, "L%u: can't pchar, stack empty", line_number);
		exit_and_Svalue[0] = 1;
	}
	if (num >= 0 && num <= 127)
	{
		num = (*stack)->n;
		fprintf(stdout, "%c\n", num);
		exit_and_Svalue[0] = 0;
	}
	else
	{
		fprintf(stderr, "L%u: can't pchar, value out of range\n", line_number);
		exit_and_Svalue[0] = 1;
	}
}
