#include "monty.h"

/**
 * func_pop - removes the top element of the stack
 * @stack: Pointer to the head of the list
 * @line_number: An int that count each line
 */
void func_pop(stack_t **stack, unsigned int line_number)
{
	int success = 0;

	if (*stack != NULL)
	{
		success = delete_dnodeint_at_index(stack, 0);
		if (success == -1)
			exit_and_Svalue[0] = 1;
		exit_and_Svalue[0] = 0;
	}
	else
	{
		fprintf(stderr, "L%u: can't pop an empty stack\n", line_number);
		exit_and_Svalue[0] = 1;
	}
}

/**
 * func_add - adds the top two elements of the stack
 * @stack: Pointer to the head of the list
 * @line_number: An int that count each line
 */
void func_add(stack_t **stack, unsigned int line_number)
{
	stack_t *head;
	int success = 0;
	int sum = 0;

	if (!stack || !*stack || !(*stack)->next)
	{
		fprintf(stderr, "L%u: can't add, stack too short\n", line_number);
		exit_and_Svalue[0] = 1;
	}
	else
	{
		head = *stack;
		sum += head->n;
		sum += head->next->n;
		head->next->n = sum;
		success = delete_dnodeint_at_index(stack, 0);
		if (success == -1)
			exit_and_Svalue[0] = 1;
		exit_and_Svalue[0] = 0;
	}

}

/**
 * func_sub - subtracts the top element of the stack
 * from the second top element of the stack
 * @stack: Pointer to the head of the list
 * @line_number: An int that count each line
 */
void func_sub(stack_t **stack, unsigned int line_number)
{
	stack_t *head;
	int sub = 0;
	int success = 0;

	if (!stack || !*stack || !(*stack)->next)
	{
		fprintf(stderr, "L%u: can't sub, stack too short\n", line_number);
		exit_and_Svalue[0] = 1;
	}
	else
	{
		head = *stack;
		sub = head->next->n;
		sub -= head->n;
		head->next->n = sub;
		success = delete_dnodeint_at_index(stack, 0);
		if (success == -1)
			exit_and_Svalue[0] = 1;
		exit_and_Svalue[0] = 0;
	}

}

/**
 * func_div - divides the second top element of the
 * stack by the top element of the stack
 * @stack: Pointer to the head of the list
 * @line_number: An int that count each line
 */
void func_div(stack_t **stack, unsigned int line_number)
{
	stack_t *head;
	int div = 0, num = 0;
	int success = 0;

	if (!stack || !*stack || !(*stack)->next)
	{
		fprintf(stderr, "L%u: can't div, stack too short\n", line_number);
		exit_and_Svalue[0] = 1;
	}
	else
	{
		head = *stack;
		div = head->next->n;
		num = head->n;
		if (num != 0)
		{
			div /= head->n;
			head->next->n = div;
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
 * func_mul - multiplies the second top element of
 * the stack with the top element of the stack
 * @stack: Pointer to the head of the list
 * @line_number: An int that count each line
 */
void func_mul(stack_t **stack, unsigned int line_number)
{
	stack_t *head;
	int mul = 0;
	int success = 0;

	if (!stack || !*stack || !(*stack)->next)
	{
		fprintf(stderr, "L%u: can't mul, stack too short\n", line_number);
		exit_and_Svalue[0] = 1;
	}
	else
	{
		head = *stack;
		mul = head->next->n;
		mul *= head->n;
		head->next->n = mul;
		success = delete_dnodeint_at_index(stack, 0);
		if (success == -1)
			exit_and_Svalue[0] = 1;
		exit_and_Svalue[0] = 0;
	}
}

