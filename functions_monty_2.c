#include "monty.h"

/**
 * func_pop - removes the top element of the stack
 * @head: Pointer to the head of the list
 * @line_number: An int that count each line
 */
void func_pop(stack_t **head, unsigned int line_number)
{
	if (*head != NULL)
	{
		delete_dnodeint_at_index(head, 0);
		printf("Succesfully took the top value = [%d] pop \n", stack_value);
		exit_value = 0;
	}
	else
	{
		fprintf(stderr, "L%u: can't pop an empty stack\n", line_number);
		exit_value = 1;
	}
	(void)head;
}

/**
 * func_add - adds the top two elements of the stack
 * @stack: Pointer to the head of the list
 * @line_number: An int that count each line
 */
void func_add(stack_t **stack, unsigned int line_number)
{
	stack_t *head;
	int sum = 0;

	if (!stack || !*stack || !(*stack)->next)
	{
		printf("L%d: can't add, stack too short\n", line_number);
		exit_value = 1;
	}
	head = *stack;
	sum += head->n;
	sum += head->next->n;
	head->next->n = sum;
	delete_dnodeint_at_index(stack, 0);
	printf("Sum = %d", sum);


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

	if (!stack || !*stack || !(*stack)->next)
	{
		printf("L%d: can't sub, stack too short\n", line_number);
		exit_value = 1;
	}
	head = *stack;
	sub = head->next->n;
	sub -= head->n;
	head->next->n = sub;
	delete_dnodeint_at_index(stack, 0);
	printf("Sub = %d", sub);


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

	if (!stack || !*stack || !(*stack)->next)
	{
		fprintf(stderr, "L%d: can't div, stack too short\n", line_number);
		exit_value = 1;
	}
	head = *stack;
	div = head->next->n;
	num = head->n;
	if (num != 0)
	{
		div /= head->n;
		head->next->n = div;
		delete_dnodeint_at_index(stack, 0);
		printf("div = %d", div);
	}
	else
	{
		fprintf(stderr, "L%d: division by zero\n", line_number);
		exit_value = 1;
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

	if (!stack || !*stack || !(*stack)->next)
	{
		printf("L%d: can't mul, stack too short\n", line_number);
		exit_value = 1;
	}
	head = *stack;
	mul = head->next->n;
	mul *= head->n;
	head->next->n = mul;
	delete_dnodeint_at_index(stack, 0);
	printf("mul = %d", mul);

}

