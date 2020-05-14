#include "monty.h"
/**
 * func_mod - get the module of the second top with the top node in the list
 * @stack: Pointer to the head of the list
 * @line_number: An int that count each line
 */
void func_mod(stack_t **stack, unsigned int line_number)
{
	stack_t *head;
	int mod = 0, success = 0, num = 0;

	if (!stack || !*stack || !(*stack)->next)
	{
		fprintf(stderr, "L%u: can't mod, stack too short\n", line_number);
		exit_and_Svalue[0] = 1;
	}
	else
	{
		head = *stack;
		mod = head->next->n;
		num = head->n;
		if (num != 0)
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
		fprintf(stderr, "L%u: can't pchar, stack empty\n", line_number);
		exit_and_Svalue[0] = 1;
	}
	else
	{
		num = (*stack)->n;
		if (num >= 0 && num <= 127)
		{
			fprintf(stdout, "%c\n", num);
			exit_and_Svalue[0] = 0;
		}
		else
		{
			fprintf(stderr, "L%u: can't pchar, value out of range\n", line_number);
			exit_and_Svalue[0] = 1;
		}
	}
}

void func_pstr(stack_t **stack, unsigned int line_number)
{
	stack_t *current = NULL;
	int num = 0;

	if (*stack)
	{
		current = *stack;
		while (current)
		{
			num = current->n;
			if (num > 0 && num <= 127)
				fprintf(stdout, "%c", num);
			else
				break;
			if (current->next == NULL)
				break;
			current = current->next;
		}
	}
	fprintf(stdout, "\n");
	exit_and_Svalue[0] = 0;
	(void)line_number;
}


void func_rotl(stack_t **stack, unsigned int line_number)
{
	stack_t *current = NULL;
	int number = 0;

	if (*stack)
	{
		current = *stack;
		number = current->n;
		add_dnodeint_end(stack, number);
		delete_dnodeint_at_index(stack, 0);
	}
	exit_and_Svalue[0] = 0;
	(void)line_number;
}

void func_rotr(stack_t **stack, unsigned int line_number)
{
	stack_t *node = NULL;
	int len_list = 0, numero = 0;

	len_list = dlistint_len(*stack);
	node = get_dnodeint_at_index(*stack, len_list - 1);
	numero = node->n;

	add_dnodeint(stack, numero);
	delete_dnodeint_at_index(stack, len_list);
	exit_and_Svalue[0] = 0;
	(void)line_number;
}
